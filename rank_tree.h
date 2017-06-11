/*
 * rank_tree.h
 *
 *  Created on: Jun 6, 2017
 *      Author: leschnitzky
 */

#ifndef RANK_TREE_H_
#define RANK_TREE_H_
#include <iostream>
#include "List.h"
#include "KVPair.h"

enum RollStatus {
	LR, RR, LL, RL, OK
};
/**
 * The Node of the AVL tree.
 * privates:
 * 		key - The key of the note in the binary search tree.
 * 		data - The data associated with the key.
 * 		left,right nodes - A pointer, carrying the sons of the node.
 *
 * 	functions:
 * 		constructor, destructor, copy-constructor.
 */
template<class Key, class Data>
class RankTreeNode {
	Key key;
	Data data;
	int height;
	int count_left;
	int count_right;
	int sum_left;
	int sum_right;
	RankTreeNode<Key, Data>* left_node;
	RankTreeNode<Key, Data>* right_node;
public:

	RankTreeNode(Key key, Data data);     		  //Node constructor
	~RankTreeNode() {
	}
	;                   		  //Node Destructor
	RankTreeNode(const RankTreeNode& avl); 		  //Copy Constructor
	int GetHeight();                     	//Function to get height of a node
	bool IsLeaf();                       	   	  //Checks if the node is leaf
	RankTreeNode<Key, Data>* GetLeft();   		  //Gets the left node
	RankTreeNode<Key, Data>* GetRight();  		  //Gets the right node
	void SetLeft(RankTreeNode<Key, Data>* left);   //Sets the left node
	void SetRight(RankTreeNode<Key, Data>* right); //Sets the right node
	int GetNodesLeft();			//Gets the number of nodes left from the node
	int GetNodesRight();		//Gets the number of nodes right from the node
	int GetSumLeft();
	int GetSumRight();
	void SetNodesLeft(int num);			//Sets the current amount of left nodes;
	void SetNodesRight(int num);	//Sets the current amount of right nodes;
	void SetSumLeft(int num);
	void SetSumRight(int num);
	int NumOfSons();				//Returns the number of sons the node has
	void SetHeight(int height);					  //Sets the Height of a node
	int GetHeightLeft();					//Gets the height of the left node
	int GetHeightRight();//Gets the height of the right node, -1 if doesn't exist
	void IncHeight();                   //Increases the Height of the node by 1
	void SubHeight();                    //Decreases the height of the node by 1
	int BalanceFactor();                //Returns the balance factor of the node
	Key GetKey();                       		  //Gets the key from the node
	Data& GetData();                    		  //Gets the data from the node
	RollStatus GetStatus(); //Gets the status telling the node which rotation it needs to follow

};

/**
 * The RankTree:
 * privates:
 * 		numOfNodes - the number of nodes in the tree
 * 		root - A pointer to the head of the tree
 *
 * 	functions:
 * 		constructor,destructor, (no copy constructor)
 * 		findInTree -  gets a key, and checks the tree if a node containing that key, exists.
 * 		insertToTree - 	gets key and data parameters, checks whether a node containing that key
 * 					   exists, then adds a new node in it's correct place. afterwards fixes the
 * 					   tree to fit the AVL Tree rules.
 * 		removeFromTree - gets a key, and checks if a node containing that key, exists.
 * 						 if it does, it removes it, and fixes the tree to fit the AVL Tree ruling.
 * 						 otherwise, alerts the user.
 * 		getNodeBF - gets a key to a node,the function returns the balance factor of that node,
 * 					if a node doesn't exists returns the appropriate exception.
 * 		size - returns the amount of nodes in the tree.
 *
 */
template<class Key, class Data>
class RankTree {
	enum TreeStatus {
		Add, Remove, NAdd
	};
	int numOfNodes;
	RankTreeNode<Key, Data>* root;

	// Private Functions /////////////////////////////////////////////////////////////////////////////////////////////////////
	void deleteTree(RankTreeNode<Key, Data>* root);	//Removes the tree for the destructor.
	Data& findCurrentNode(RankTreeNode<Key, Data>* node, Key key);//A function for recursive search for the find function
	void removeRoot(List<RankTreeNode<Key, Data>*> route);//Removes the root and handles heights and AVL connections
	void removeNode(RankTreeNode<Key, Data>* father, bool cond_right,
			List<RankTreeNode<Key, Data>*>& route);	//Removes the node and handles heights and AVL connections
	void removeRightLeaf(RankTreeNode<Key, Data>* father);//Conditionals for the node remove
	void removeRightOneSon(RankTreeNode<Key, Data>* father);
	void removeRightTwoSons(RankTreeNode<Key, Data>* father,
			List<RankTreeNode<Key, Data>*>& route);
	void removeLeftLeaf(RankTreeNode<Key, Data>* father);
	void removeLeftOneSon(RankTreeNode<Key, Data>* father);
	void removeLeftTwoSons(RankTreeNode<Key, Data>* father,
			List<RankTreeNode<Key, Data>*>& route);
	void updateRank(RankTreeNode<Key, Data>* node);

	void handleBF(List<RankTreeNode<Key, Data>*>& route, TreeStatus status);
	void shiftRR(RankTreeNode<Key, Data>* node,
			List<RankTreeNode<Key, Data>*>& route);
	void shiftLL(RankTreeNode<Key, Data>* node,
			List<RankTreeNode<Key, Data>*>& route);
	void shiftRL(RankTreeNode<Key, Data>* node,
			List<RankTreeNode<Key, Data>*>& route);
	void shiftLR(RankTreeNode<Key, Data>* node,
			List<RankTreeNode<Key, Data>*>& route);
	void Preorder_aux(RankTreeNode<Key, Data>* root);
	void Inorder_aux(RankTreeNode<Key, Data>* root);
public:
	RankTree();
	~RankTree();
	Data& findInTree(Key key_tofind);
	void insertToTree(Key key, Data data);
	void removeFromTree(Key key);
	int getNodeBF(Key key);
	int size();
	void PrintInorder();
	void PrintPreorder();
	Key* InorderKeys();
	Data* InorderData();
	bool Exists(Key key);
	void UpdateTreeFromArrays(Key* key_array, int len_key, Data* data_array,
			int len_data);
	void RankTree<Key, Data>::UpdateTreeFromPairArr(Pair<Key, Data>* arr,
			int len);
	void RankTree<Key, Data>::SetupTreeRanks(RankTreeNode<Key, Data>* root);
	Key getBiggestKey();

	// Test Functions/////
	bool testAllBFs(RankTreeNode<Key, Data>* node) {
		if (!node) {
			return true;
		}
		if ((*node->getBF() < -1) || (*node->getBF() > 1)) {
			return false;
		}
		return ((testAllBFs(*node->left_node))
				&& (testAllBFs(*node->right_node)));
	}

	void addValuesToTree(Data* array, RankTreeNode<Key, Data>* node) {
		if (!node) {
			return;
		}
		addValuesToTree(array, node->GetLeft());
		*array = node->GetData();
		addValuesToTree(array + 1, node->GetRight());
		return;
	}
	void addTreeKeys(Key* array, RankTreeNode<Key, Data>* node) {
		if (!node) {
			return;
		}
		addTreeKeys(array, node->GetLeft());
		*array = node->GetKey();
		addTreeKeys(array + 1, node->GetRight());
		return;
	}

	int InorderTreeKeyData(Pair<Key, Data>* arr, RankTreeNode<Key, Data>* node,
			int index) {
		if (node == nullptr)
			return index;
		index = InorderTreeKeyData(arr, node->GetLeft(), index);
		arr[index++] = Pair<Key*, Data*>(node->GetKey(), node->GetData());
		index = InorderTreeKeyData(arr, node->GetRight(), index);
		return index;
	}

	int InorderTreeKeys(Key* arr, RankTreeNode<Key, Data>* node, int index) {
		if (node == nullptr)
			return index;
		index = InorderTreeKeys(arr, node->GetLeft(), index);
		arr[index++] = node->GetKey();
		index = InorderTreeKeys(arr, node->GetRight(), index);
		return index;
	}

	int InorderTreeData(Data* arr, RankTreeNode<Key, Data>* node, int index) {
		if (node == nullptr)
			return index;
		index = InorderTreeData(arr, node->GetLeft(), index);
		arr[index++] = node->GetData();
		index = InorderTreeData(arr, node->GetRight(), index);
		return index;
	}

	bool testSearchTree(RankTreeNode<Key, Data>* node) {
		if (!node) {
			return false;
		}
		Data array[] = new Data[numOfNodes];
		addValuesToTree(array, root);
		for (int i = 0; i < numOfNodes - 1; i++) {
			if (array[i] >= array[i + 1]) {
				return false;
			}
		}
		delete array;
		return true;
	}

	Key* GetTreeKeys() {
		if (!this->numOfNodes) {
			return nullptr;
		}
		Key* array = new Key[numOfNodes];
		InorderTreeKeys(array, this->root, 0);
		return array;
	}

	Data* GetTreeData() {
		if (!this->numOfNodes) {
			return nullptr;
		}
		Data* array = new Data[numOfNodes];
		InorderTreeData(array, this->root, 0);
		return array;
	}
	///// The rest of the tree functions//////

	RankTree(const RankTree&) = delete;			//No copy constructor for tree
};

/*
 * The exceptions of the tree
 * 		AlreadyInTree - A node with the same key exists in the tree (in Insertion)
 * 		NotInTree - There does not exist a node with a key (in Deletion or Search)
 * 		EmptyTree - The current tree is empty
 */
class TreeExceptions: public std::exception {
};
class AlreadyInTree: public TreeExceptions {
};
class NotInTree: public TreeExceptions {
};
class EmptyTree: public TreeExceptions {
};
class InvalidHeight: public TreeExceptions {
};

/*
 * avl_tree.cpp
 *
 *  Created on: Apr 29, 2017
 *      Author: leschnitzky
 */
#include "rank_tree.h"
#include "List.h"

///////////////////Node functions////////////////////////////
template<class Key, class Data>
RankTreeNode<Key, Data>::RankTreeNode(Key key, Data data) :
		key(key), data(data) {
	this->left_node = nullptr;
	this->right_node = nullptr;
	this->height = 0;
	this->count_left = 0;
	this->count_right = 0;
	this->sum_left = 0;
	this->sum_right = 0;
}

template<class Key, class Data>
RankTreeNode<Key, Data>::RankTreeNode(const RankTreeNode<Key, Data>& avl) {
	this->data = avl.data;
	this->key = avl.key;
	this->left_node = avl.left_node;
	this->right_node = avl.right_node;
	this->height = avl.height;
	this->count_left = avl.count_left;
	this->count_right = avl.count_right;
	this->sum_left = avl.sum_left;
	this->sum_right = avl.sum_right;
}

template<class Key, class Data>
int RankTreeNode<Key, Data>::GetHeightLeft() {
	if (this->left_node == nullptr) {
		return 0;
	}
	return this->left_node->GetHeight();
}

template<class Key, class Data>
int RankTreeNode<Key, Data>::GetHeightRight() {
	if (this->right_node == nullptr) {
		return 0;
	}
	return this->right_node->GetHeight();
}

template<class Key, class Data>
void RankTreeNode<Key, Data>::SetHeight(int height) {
	this->height = height;
}

template<class Key, class Data>
void RankTreeNode<Key, Data>::IncHeight() {
	this->height++;
}

template<class Key, class Data>
void RankTreeNode<Key, Data>::SubHeight() {
	this->height--;
}

template<class Key, class Data>
bool RankTreeNode<Key, Data>::IsLeaf() {
	return (this->right_node == nullptr && this->left_node == nullptr);
}

template<class Key, class Data>
RankTreeNode<Key, Data>* RankTreeNode<Key, Data>::GetLeft() {
	return this->left_node;
}

template<class Key, class Data>
RankTreeNode<Key, Data>* RankTreeNode<Key, Data>::GetRight() {
	return this->right_node;
}

template<class Key, class Data>
void RankTreeNode<Key, Data>::SetLeft(RankTreeNode<Key, Data>* left) {
	this->left_node = left;
}

template<class Key, class Data>
void RankTreeNode<Key, Data>::SetRight(RankTreeNode<Key, Data>* right) {
	this->right_node = right;
}

template<class Key, class Data>
int RankTreeNode<Key, Data>::NumOfSons() {
	if (this->IsLeaf()) {
		return 0;
	}
	if (this->right_node != nullptr) {
		if (this->left_node != nullptr) {
			return 2;
		}
		return 1;
	}
	return 1;
}

template<class Key, class Data>
int RankTreeNode<Key, Data>::GetHeight() {
	return this->height;
}

template<class Key, class Data>
int RankTreeNode<Key, Data>::BalanceFactor() {
	if (this->IsLeaf())
		return 0;
	int right_h, left_h;
	if (this->right_node == nullptr)
		right_h = 0;
	else
		right_h = (this->right_node->height + 1);
	if (this->left_node == nullptr)
		left_h = 0;
	else
		left_h = (this->left_node->height + 1);
	return left_h - right_h;
}

template<class Key, class Data>
Key RankTreeNode<Key, Data>::GetKey() {
	return this->key;
}

template<class Key, class Data>
Data& RankTreeNode<Key, Data>::GetData() {
	return this->data;
}

template<class Key, class Data>
RollStatus RankTreeNode<Key, Data>::GetStatus() {
	int balance_left;				//To check the right son's balance factor
	int balance_right;					//To check the left son's balance factor
	if (this->left_node == nullptr)
		balance_left = 0;
	else
		balance_left = this->left_node->BalanceFactor();
	if (this->right_node == nullptr)
		balance_right = 0;
	else
		balance_right = this->right_node->BalanceFactor();

	if (this->BalanceFactor() == 2) {//Returns status according the requirements for the rotation
		if (balance_left >= 0) {
			return LL;
		}
		return LR;
	}
	if (this->BalanceFactor() == -2) {
		if (balance_right <= 0) {
			return RR;
		}
		return RL;
	}
	return OK;
}

template<class Key, class Data>
int RankTreeNode<Key, Data>::GetNodesLeft() {
	return this->count_left;
}

template<class Key, class Data>
int RankTreeNode<Key, Data>::GetNodesRight() {
	return this->count_right;
}

template<class Key, class Data>
int RankTreeNode<Key, Data>::GetSumLeft() {
	return this->sum_left;
}

template<class Key, class Data>
int RankTreeNode<Key, Data>::GetSumRight() {
	return this->sum_right;
}
template<class Key, class Data>
void RankTreeNode<Key, Data>::SetNodesLeft(int num) {
	this->count_left = num;
}

template<class Key, class Data>
void RankTreeNode<Key, Data>::SetNodesRight(int num) {
	this->count_right = num;
}

template<class Key, class Data>
void RankTreeNode<Key, Data>::SetSumLeft(int num) {
	this->sum_left = num;
}

template<class Key, class Data>
void RankTreeNode<Key, Data>::SetSumRight(int num) {
	this->sum_right = num;
}

/////////// RankTree functions///////////////////////
template<class Key, class Data>
RankTree<Key, Data>::RankTree() :
		numOfNodes(0) {
	this->root = nullptr;
}

template<class Key, class Data>
RankTree<Key, Data>::~RankTree() {
	deleteTree(this->root);
	this->root = nullptr;
}

template<class Key, class Data>
int RankTree<Key, Data>::size() {
	return this->numOfNodes;
}

template<class Key, class Data>
void RankTree<Key, Data>::deleteTree(RankTreeNode<Key, Data>* root) {
	if (!root) {
		return;
	}
	deleteTree(root->GetLeft());
	deleteTree(root->GetRight());
	root->SetLeft(nullptr);
	root->SetRight(nullptr);
	delete root;
}

template<class Key, class Data>
void RankTree<Key, Data>::insertToTree(Key key, Data data) {

	List<RankTreeNode<Key, Data>*> route;
	RankTreeNode<Key, Data>* node = root;				//Create a node iterator
	while (node) {											//Travel-tree loop
		route.PushBack(node);						//Add the route to the list
		if (key == node->GetKey()) {
			throw AlreadyInTree();						//The node is already in
		}
		if (key < node->GetKey()) {						//If key lower, go left
			if (node->GetLeft() == nullptr) {
				if (node->IsLeaf()) {//If the new node added to a leaf, update route +1
					node->SetLeft(new RankTreeNode<Key, Data>(key, data));//Adds a new node
					handleBF(route, Add);		//Handles the AVL requirements
					break;
				}
				node->SetLeft(new RankTreeNode<Key, Data>(key, data));
				node->GetLeft()->SetHeight(root->GetHeight() - route.Size());
				handleBF(route, NAdd);//If added to a node with a son, no need to add +1 to route
				break;
			}
			node = node->GetLeft();
			continue;
		}								//The same process for the right side.
		if (node->GetRight() == nullptr) {
			if (node->IsLeaf()) {
				node->SetRight(new RankTreeNode<Key, Data>(key, data));
				handleBF(route, Add);
				break;
			}
			node->SetRight(new RankTreeNode<Key, Data>(key, data));
			node->GetRight()->SetHeight(root->GetHeight() - route.Size());
			handleBF(route, NAdd);
			break;
		}
		node = node->GetRight();
	}
	if (root == nullptr) {
		root = new RankTreeNode<Key, Data>(key, data);
		handleBF(route, Add);
	}
}

template<class Key, class Data>
void RankTree<Key, Data>::removeRoot(List<RankTreeNode<Key, Data>*> route) {
	bool removeRight = false;
	if (root->IsLeaf()) {
		delete root;
		root = nullptr;
		route.RemoveLast();
		return;
	}
	RankTreeNode<Key, Data>* temp = root;//If the root has 1 son, it's either the root and the right
	if (this->root->NumOfSons() == 1) {	//or the root and the left, replace and delete
		if (root->GetRight() == nullptr) {
			temp = temp->GetLeft();
			delete root;
			root = temp;
			temp->SetHeight(0);
			route.RemoveLast();
		} else {
			temp = temp->GetRight();
			delete root;
			root = temp;
			temp->SetHeight(0);
			route.RemoveLast();
		}
	} else {
		route.PushBack(temp);//If the root has 2 sons, we'll pick the left son, travel the farthest
		temp = temp->GetLeft();	//right, switch between the nodes, and delete the leaf.
		route.PushBack(temp);		//add the route to the node we're switching
		while (temp->GetRight() != nullptr) {//Loop until we get to the last right node possible
			temp = temp->GetRight();
			route.PushBack(temp);
			removeRight = true;
		}
		route.RemoveLast();									//Switch the nodes
		int height = root->GetHeight();
		int num_left = root->GetNodesLeft();
		int num_right = root->GetNodesRight();
		RankTreeNode<Key, Data>* left = root->GetLeft();
		RankTreeNode<Key, Data>* right = root->GetRight();
		*(root) = *temp;
		root->SetLeft(left);
		root->SetRight(right);
		root->SetHeight(height);
		root->SetNodesLeft(num_left - 1);
		root->SetNodesRight(num_right);
		typename List<RankTreeNode<Key, Data>*>::Iterator it(route, false);
		removeNode(*it, removeRight, route);
	}
}

template<class Key, class Data>
void RankTree<Key, Data>::removeRightLeaf(RankTreeNode<Key, Data>* father) {
	delete father->GetRight();				//If it's a leaf, simply delete him
	father->SetRight(nullptr);
	return;
}

template<class Key, class Data>
void RankTree<Key, Data>::removeLeftLeaf(RankTreeNode<Key, Data>* father) {
	delete father->GetLeft();				//If it's a leaf, simply delete him
	father->SetLeft(nullptr);
	return;
}

template<class Key, class Data>
void RankTree<Key, Data>::removeRightOneSon(RankTreeNode<Key, Data>* father) {
	RankTreeNode<Key, Data>* temp = father->GetRight();	//If the node has one leaf, we connect the father to it's sub-tree
	if (father->GetLeft() != nullptr) {
		if (father->GetRight()->GetHeight() >= father->GetLeft()->GetHeight()) {
			father->SubHeight();
		}
	}
	if (temp->GetRight() == nullptr) {					//and delete the node
		father->SetRight(temp->GetLeft());
		delete temp;
		return;
	}
	father->SetRight(temp->GetRight());
	delete temp;
	return;
}

template<class Key, class Data>
void RankTree<Key, Data>::removeLeftOneSon(RankTreeNode<Key, Data>* father) {
	RankTreeNode<Key, Data>* temp = father->GetLeft();//In an AVL tree if the node contains one son, the son is a leaf.
	if (father->GetRight() != nullptr) {
		if (father->GetRight()->GetHeight() <= father->GetLeft()->GetHeight()) {
			father->SubHeight();
		}
	}
	if (temp->GetRight() == nullptr) {
		father->SetLeft(temp->GetLeft());
		delete temp;
		return;
	}
	father->SetLeft(temp->GetRight());
	delete temp;
	return;
}

template<class Key, class Data>
void RankTree<Key, Data>::removeRightTwoSons(RankTreeNode<Key, Data>* father,
		List<RankTreeNode<Key, Data>*>& route) {
	bool removeRight = false;
	RankTreeNode<Key, Data>* temp = father->GetRight();	//If the node has 2 sons we track for the next value in key, switch the nodes
	route.PushBack(temp);						//and remove the leaf at the end
	RankTreeNode<Key, Data>* next = temp->GetLeft();//Must contain left, because 2 sons
	route.PushBack(next);			//We save the route to the leaf we switch
	while (next->GetRight() != nullptr) {//Loop to get the leaf we want to switch
		next = next->GetRight();
		route.PushBack(next);
		removeRight = true;
	}
	route.RemoveLast();	//Switch the nodes
	int height = temp->GetHeight();
	int num_left = temp->GetNodesLeft();
	int num_right = temp->GetNodesRight();
	RankTreeNode<Key, Data>* right = temp->GetRight();
	RankTreeNode<Key, Data>* left = temp->GetLeft();
	*temp = *(next);
	temp->SetRight(right);
	temp->SetLeft(left);
	temp->SetHeight(height);
	temp->SetNodesRight(num_right);
	temp->SetNodesLeft(num_left);
	typename List<RankTreeNode<Key, Data>*>::Iterator it(route, false);	//The last node before the leaf.
	removeNode((*it), removeRight, route);
}

template<class Key, class Data>
void RankTree<Key, Data>::removeLeftTwoSons(RankTreeNode<Key, Data>* father,
		List<RankTreeNode<Key, Data>*>& route) {
	bool removeRight = false;
	RankTreeNode<Key, Data>* temp = father->GetLeft();//Saves the pointer to switch with next
	route.PushBack(temp);
	RankTreeNode<Key, Data>* next = temp->GetLeft();//Must contain right, because 2 sons
	route.PushBack(next);			//We save the route to the leaf we switch
	while (next->GetRight() != nullptr) {//Loop to get the leaf we want to switch
		next = next->GetRight();
		route.PushBack(next);
		removeRight = true;
	}
	route.RemoveLast();
	int height = temp->GetHeight();
	RankTreeNode<Key, Data>* right = temp->GetRight();
	RankTreeNode<Key, Data>* left = temp->GetLeft();
	*temp = *next;											//Switch the nodes
	temp->SetRight(right);
	temp->SetLeft(left);
	temp->SetHeight(height);
	typename List<RankTreeNode<Key, Data>*>::Iterator it(route, false);
	removeNode((*it), removeRight, route);
}

template<class Key, class Data>
void RankTree<Key, Data>::updateRank(RankTreeNode<Key, Data>* node) {
	if (node->IsLeaf()) {
		node->SetNodesLeft(0);
		node->SetNodesRight(0);
		node->SetSumLeft(0);
		node->SetSumRight(0);
	} else if (node->NumOfSons() == 1) {
		if (!node->GetRight()) {
			node->SetNodesRight(0);
			node->SetNodesLeft(
					node->GetLeft()->GetNodesLeft()
							+ node->GetLeft()->GetNodesRight() + 1);
			node->SetSumRight(0);
			node->SetSumLeft(
					(node->GetLeft()->GetSumLeft()
							+ node->GetLeft()->GetSumRight()) + node->GetLeft()->GetKey());

		} else {
			node->SetNodesLeft(0);
			node->SetNodesRight(
					node->GetRight()->GetNodesLeft()
							+ node->GetRight()->GetNodesRight() + 1);
			node->SetSumLeft(0);
			node->SetSumRight(
					(node->GetRight()->GetSumLeft()
								+ node->GetRight()->GetSumRight()) + node->GetRight()->GetKey());

		}
	} else {
		node->SetNodesLeft(
				node->GetLeft()->GetNodesLeft()
						+ node->GetLeft()->GetNodesRight() + 1);
		node->SetNodesRight(
				node->GetRight()->GetNodesLeft()
						+ node->GetRight()->GetNodesRight() + 1);
		node->SetSumLeft(
				(node->GetLeft()->GetSumLeft()
						+ node->GetLeft()->GetSumRight()) + node->GetLeft()->GetKey());
		node->SetSumRight(
				(node->GetRight()->GetSumLeft()
							+ node->GetRight()->GetSumRight()) + node->GetRight()->GetKey());
	}
}

template<class Key, class Data>
void RankTree<Key, Data>::removeNode(RankTreeNode<Key, Data>* father,
		bool cond_right, List<RankTreeNode<Key, Data>*>& route) {
	if (cond_right) {//Check if the node we need to remove is left or right from the father
		if (father->GetRight()->IsLeaf()) {
			removeRightLeaf(father);
			updateRank(father);
			return;
		}
		if (father->GetRight()->NumOfSons() == 1) {
			removeRightOneSon(father);
			updateRank(father);
			return;
		}
		removeRightTwoSons(father, route);
		updateRank(father);
		return;
	}
	if (father->GetLeft()->IsLeaf()) {
		removeLeftLeaf(father);
		updateRank(father);
		return;
	}
	if (father->GetLeft()->NumOfSons() == 1) {
		removeLeftOneSon(father);
		updateRank(father);
		return;
	}
	removeLeftTwoSons(father, route);
	updateRank(father);
}

template<class Key, class Data>
void RankTree<Key, Data>::removeFromTree(Key key) {
	if (size() == 0) {									//If the tree is empty
		throw EmptyTree();
	}
	bool cond_right;//A variable to check which node to remove, left or right
	List<RankTreeNode<Key, Data>*> route;//A list of the route to track which nodes we visited
	RankTreeNode<Key, Data>* node = root;		//Start the search from the root
	while (node != nullptr) {								//Loop on the tree
		route.PushBack(node);	//Add the current node to the route of the tree
		if (node->GetKey() == key) {				//In case we found the node
			if (node == root) {								//If it's the root
				route.RemoveLast();
				removeRoot(route);
				handleBF(route, Remove);
				return;
			}
			route.RemoveLast();							//If it's not the root
			typename List<RankTreeNode<Key, Data>*>::Iterator it(route, false);
			if (cond_right) {
				if ((*it)->GetRight()->NumOfSons() == 2) {
					removeNode(*it, cond_right, route);
					handleBF(route, Remove);
				} else {
					removeNode(*it, cond_right, route);
					handleBF(route, Remove);
				}
			} else if ((*it)->GetLeft()->NumOfSons() == 2) {
				removeNode(*it, cond_right, route);
				handleBF(route, Remove);
			} else {
				removeNode(*it, cond_right, route);
				handleBF(route, Remove);
			}
			return;
		}
		if (key < node->GetKey()) {								//If we go left
			node = node->GetLeft();
			cond_right = false;
			continue;
		}
		node = node->GetRight();								//if we go right
		cond_right = true;
	}
	throw NotInTree();
}

template<class Key, class Data>
Data& RankTree<Key, Data>::findCurrentNode(RankTreeNode<Key, Data>* node,
		Key key) {		//Recursive find in the tree.
	if (node == nullptr)
		throw NotInTree();
	if (node->GetKey() == key)
		return node->GetData();
	if (!node->GetLeft() && !node->GetRight()) {
		throw NotInTree();
	}
	if (node->GetKey() > key) {
		return findCurrentNode(node->GetLeft(), key);
	}
	return findCurrentNode(node->GetRight(), key);
}

template<class Key, class Data>
Data& RankTree<Key, Data>::findInTree(Key key_tofind) {	//Calls the recursive find in the tree.
	if (!root) {
		throw EmptyTree();
	}
	return this->findCurrentNode(root, key_tofind);

}

template<class Key, class Data>
void RankTree<Key, Data>::shiftLL(RankTreeNode<Key, Data>* node,
		List<RankTreeNode<Key, Data>*>& route) {
	if (!node) {							//If there is no node, can't rotate
		return;
	}
	if (!node->GetLeft()) {	//If the node doesn't have a left son, can't rotate
		return;
	}
	RankTreeNode<Key, Data>* temp = node->GetLeft();//We assign the left son as a temporary node

	if (root == node) {
		root = temp;
	}

	node->SetLeft(temp->GetRight());					//Update the pointers
	temp->SetRight(node);

	updateRank(node);
	updateRank(temp);

//	if(root->GetKey() == node->GetKey()){								//If it's the root, switch the root with the temp
//		root = temp;
//		route.RemoveLast();
//		route.PushBack(root);
//		return;
//	}

	if (node->IsLeaf())
		node->SetHeight(0);
	else if (node->GetLeft() == nullptr)
		node->SetHeight(node->GetRight()->GetHeight() + 1);
	else if (node->GetRight() == nullptr)
		node->SetHeight(node->GetLeft()->GetHeight() + 1);
	else {
		if (node->GetLeft()->GetHeight() > node->GetRight()->GetHeight())
			node->SetHeight(node->GetLeft()->GetHeight() + 1);
		else
			node->SetHeight(node->GetRight()->GetHeight() + 1);
	}

	if (temp->GetLeft() == nullptr)
		temp->SetHeight(temp->GetRight()->GetHeight() + 1);
	else if (temp->GetRight()->GetHeight() > temp->GetLeft()->GetHeight())
		temp->SetHeight(temp->GetRight()->GetHeight() + 1);
	else
		temp->SetHeight(temp->GetLeft()->GetHeight() + 1);

	typename List<RankTreeNode<Key, Data>*>::Iterator it(route, false);
	if (root->GetKey() == temp->GetKey())
		return;
	it.Prev();								// not root at least 1 previous node
	if ((*it)->GetLeft() != nullptr) {
		if ((*it)->GetLeft()->GetKey() == node->GetKey()) {
			(*it)->SetLeft(temp);
			route.RemoveLast();
			return;
		}
	}
	U(*it)->SetRight(temp);
	route.RemoveLast();
}

template<class Key, class Data>
void RankTree<Key, Data>::shiftRR(RankTreeNode<Key, Data>* node,
		List<RankTreeNode<Key, Data>*>& route) {
	if (!node) {				//Symetric to the LL method on the other side.
		return;
	}
	if (!node->GetRight()) {
		return;
	}

	RankTreeNode<Key, Data>* temp = node->GetRight();

	if (root == node) {
		root = temp;
	}

	node->SetRight(temp->GetLeft());
	temp->SetLeft(node);
	updateRank(node);
	updateRank(temp);
	if (node->IsLeaf())
		node->SetHeight(0);
	else if (node->GetLeft() == nullptr)
		node->SetHeight(node->GetRight()->GetHeight() + 1);
	else if (node->GetRight() == nullptr)
		node->SetHeight(node->GetLeft()->GetHeight() + 1);
	else {
		if (node->GetLeft()->GetHeight() > node->GetRight()->GetHeight())
			node->SetHeight(node->GetLeft()->GetHeight() + 1);
		else
			node->SetHeight(node->GetRight()->GetHeight() + 1);
	}

	if (temp->GetRight() == nullptr)
		temp->SetHeight(temp->GetLeft()->GetHeight() + 1);
	else if (temp->GetRight()->GetHeight() > temp->GetLeft()->GetHeight())
		temp->SetHeight(temp->GetRight()->GetHeight() + 1);
	else
		temp->SetHeight(temp->GetLeft()->GetHeight() + 1);

//	if(root->GetKey() == node->GetKey()){
//		root = temp;
//		route.RemoveLast();
//		route.PushBack(root);
//		return;
//	}
	typename List<RankTreeNode<Key, Data>*>::Iterator it(route, false);
	if (root->GetKey() == temp->GetKey())
		return;
	it.Prev();
	if ((*it)->GetLeft() != nullptr) {
		if ((*it)->GetLeft()->GetKey() == node->GetKey()) {
			(*it)->SetLeft(temp);
			route.RemoveLast();
			return;
		}
	}
	(*it)->SetRight(temp);
	route.RemoveLast();
}

template<class Key, class Data>
void RankTree<Key, Data>::shiftRL(RankTreeNode<Key, Data>* node,
		List<RankTreeNode<Key, Data>*>& route) {
	if (!node) {			//Same as before, if no nodes, can't do the rotation
		return;
	}
	if (!node->GetRight()) {
		return;
	}
	route.PushBack(node->GetRight());
	shiftLL(node->GetRight(), route);	//First LL the right node with it's left
	shiftRR(node, route);			//Then RR the father with it's right node

}

template<class Key, class Data>
void RankTree<Key, Data>::shiftLR(RankTreeNode<Key, Data>* node,
		List<RankTreeNode<Key, Data>*>& route) {
	if (!node) {									//Symetric to the RL method.
		return;
	}
	if (!node->GetLeft()) {
		return;
	}
	route.PushBack(node->GetLeft());
	shiftRR(node->GetLeft(), route);
	shiftLL(node, route);
	updateRank(node);
	updateRank(node->GetRight());
}

template<class Key, class Data>
void RankTree<Key, Data>::handleBF(List<RankTreeNode<Key, Data>*>& route,
		TreeStatus status) {
	typename List<RankTreeNode<Key, Data>*>::Iterator it(route, false);
	if ((status == Add) || (status == NAdd)) {//If we add, inc the total number of nodes
		this->numOfNodes++;
	}
	if (status == Remove) {				//If we remove,decrease the total number
		this->numOfNodes--;
	}
	while (route.Size() != 0) {			//Loop to travel the route of the action
		switch (status) {
		case Add:
			if ((*it)->IsLeaf()) {
				(*it)->SetHeight(0);
				break;
			}
			if ((*it)->GetHeightLeft() > (*it)->GetHeightRight()) {
				(*it)->SetHeight((*it)->GetHeightLeft() + 1);
			}
			(*it)->SetHeight((*it)->GetHeightRight() + 1);
			break;
		case Remove:
			if ((*it)->IsLeaf()) {
				(*it)->SetHeight(0);
				break;
			}
			if ((*it)->GetHeightLeft() > (*it)->GetHeightRight()) {
				(*it)->SetHeight((*it)->GetHeightLeft() + 1);
			}
			(*it)->SetHeight((*it)->GetHeightRight() + 1);
			break;
		default:
			break;										//otherwise, do nothing
		};
		RollStatus res = (*it)->GetStatus();//Gets the BF from the node and calculates which rotation to do
		updateRank(*it);
		try {
			switch (res) {
			case (RL)://For each rotation we lower the tree's total height by 1
				shiftRL(*it, route);
				it.Prev();
				break;
			case (RR):
				shiftRR(*it, route);
				it.Prev();
				break;
			case (LL):
				shiftLL(*it, route);
				it.Prev();
				break;
			case (LR):
				shiftLR(*it, route);
				it.Prev();
				break;
			case (OK):
				it.Prev();
				route.RemoveLast();
				break;
			};
		} catch (IteratorAtStart& e) {
			return;
		}
	}
}

template<class Key, class Data>
Key RankTree<Key, Data>::getBiggestKey() {
	if (root == nullptr) {								//If the tree is empty.
		throw EmptyTree();
	}
	RankTreeNode<Key, Data>* node = root;	//travel to the right from the root
	while (node->GetRight() != nullptr) {
		node = node->GetRight();
	}
	return node->GetKey();										//Return the key
}

template<class Key, class Data>
void RankTree<Key, Data>::Preorder_aux(RankTreeNode<Key, Data>* root) {
	if (root == nullptr)
		return;
	std::cout << root->GetKey() << " -(" << root->GetNodesLeft() << ","
			<< root->GetNodesRight() << ") , ";
	Preorder_aux(root->GetLeft());
	Preorder_aux(root->GetRight());
}

template<class Key, class Data>
void RankTree<Key, Data>::Inorder_aux(RankTreeNode<Key, Data>* root) {
	if (root == nullptr)
		return;
	Inorder_aux(root->GetLeft());
	std::cout << root->GetKey() << " -(" << root->GetNodesLeft() << ","
			<< root->GetNodesRight() << ") , ";
	Inorder_aux(root->GetRight());
}

template<class Key, class Data>
void RankTree<Key, Data>::PrintPreorder() {
	this->Preorder_aux(this->root);
}

template<class Key, class Data>
void RankTree<Key, Data>::PrintInorder() {
	this->Inorder_aux(this->root);
}

template<class Key, class Data>
Data* RankTree<Key, Data>::InorderData() {
	return this->GetTreeData();
}

template<class Key, class Data>
Key* RankTree<Key, Data>::InorderKeys() {
	return this->GetTreeKeys();
}

template<class Key, class Data>
bool RankTree<Key, Data>::Exists(Key key) {
	try {
		this->findInTree(key);
		return true;
	} catch (NotInTree& e) {
		return false;
	} catch (EmptyTree& e) {
		return false;
	}
}

template<class Key, class Data>
fRankTreeNode<Key, Data>* BalancedTreeFromArray(RankTreeNode<Key, Data>** arr,
		int start, int end) {
	if (start > end)
		return nullptr;
	int mid = start + (end - start) / 2;
	RankTreeNode<Key, Data>* root = new RankTreeNode<Key, Data>(
			arr[mid]->GetKey(), arr[mid]->GetData());
	root->SetLeft(BalancedTreeFromArray(arr, start, mid - 1));
	root->SetRight(BalancedTreeFromArray(arr, mid + 1, end));
	return root;
}

template<class Key, class Data>
void SetBalancedTreeHeight(RankTreeNode<Key, Data>* root) {

	if (root == nullptr) {
		return;
	} else if (root->IsLeaf()) {
		root->SetHeight(0);
	}

	else {
		SetBalancedTreeHeight(root->GetLeft());
		SetBalancedTreeHeight(root->GetRight());
		if (root->GetLeft() == nullptr) {
			root->SetHeight(root->GetRight()->GetHeight() + 1);
		} else if (root->GetRight() == nullptr) {
			root->SetHeight(root->GetLeft()->GetHeight() + 1);
		} else {
			if (root->GetLeft()->GetHeight() > root->GetRight()->GetHeight())
				root->SetHeight(root->GetLeft()->GetHeight() + 1);
			else
				root->SetHeight(root->GetRight()->GetHeight() + 1);
		}
	}
}

template<class Key, class Data>
void RankTree<Key, Data>::SetupTreeRanks(RankTreeNode<Key, Data>* root) {
	if (root == nullptr)
		return;
	SetupTreeRanks(root->GetLeft());  //First, set left tree
	SetupTreeRanks(root->GetRight()); //And set right tree ranks
	//Then set current ranks according to them.
	int sum_left = 0, sum_right = 0, cnt_left = 0, cnt_right = 0;
	if (root->IsLeaf()) {
		root->SetNodesLeft(0);
		root->SetNodesRight(0);
		root->SetSumLeft(0);
		root->SetSumRight(0);
		return;
	} else if (root->GetRight() == nullptr) {
		cnt_left += root->GetLeft()->GetNodeLeft()
				+ root->GetLeft()->GetNodesRight() + 1;
		sum_left += root->GetLeft()->GetSumLeft()
				+ root->GetLeft()->GetSumRight();
		sum_left += root->GetLeft()->GetKey();
	} else if (root->GetLeft() == nullptr) {
		cnt_right += root->GetRight()->GetNodesLeft()
				+ root->GetRight()->GetNodesRight() + 1;
		sum_right += root->GetRight()->GetSumLeft()
				+ root->GetRight()->GetSumRight();
		sum_right += root->GetLeft()->GetKey();
	} else {
		cnt_left += root->GetLeft()->GetNodeLeft()
				+ root->GetLeft()->GetNodesRight() + 1;
		sum_left += root->GetLeft()->GetSumLeft()
				+ root->GetLeft()->GetSumRight();
		sum_left += root->GetLeft()->GetKey();
		cnt_right += root->GetRight()->GetNodesLeft()
				+ root->GetRight()->GetNodesRight() + 1;
		sum_right += root->GetRight()->GetSumLeft()
				+ root->GetRight()->GetSumRight();
		sum_right += root->GetLeft()->GetKey();
	}
	root->SetNodesLeft(cnt_left);
	root->SetNodesRight(cnt_right);
	root->SetSumLeft(sum_left);
	root->SetSumRight(sum_right);
}

template<class Key, class Data>
void RankTree<Key, Data>::UpdateTreeFromArrays(Key* key_array, int len_key,
		Data* data_array, int len_data) {
	if (len_key != len_data)
		return;
	RankTreeNode<Key, Data>** arr = new RankTreeNode<Key, Data>*[len_key];
	for (int i = 0; i < len_key; i++) {
		arr[i] = new RankTreeNode<Key, Data>(key_array[i], data_array[i]);
	}
	RankTreeNode<Key, Data>* next_root = BalancedTreeFromArray(arr, 0,
			len_key - 1);
	SetBalancedTreeHeight(next_root);
	this->deleteTree(this->root);
	this->root = next_root;
	for (int i = 0; i < len_key; i++) {
		if (!arr[i])
			delete arr[i];
	}
	delete arr;
}

template<class Key, class Data>
void RankTree<Key, Data>::UpdateTreeFromPairArr(Pair<Key, Data>* arr, int len) {
	if (len == 0 || arr == nullptr)
		return;
	RankTreeNode<Key, Data>** node_arr = new RankTreeNode<Key, Data>*[len];
	for (int i = 0; i < len; i++) {
		node_arr[i] = RankTreeNode<Key, Data>(arr[i].GetKey(),
				arr[i].GetValue());
	}
	RankTreeNode<Key, Data>** next_root = BalancedTreeFromArray(node_arr, 0,
			len - 1);
	SetBalancedTreeHeight(next_root);
	this->deleteTree(this->root);
	this->root = next_root;
	delete node_arr;
}

#endif /* RANK_TREE_H_ */
