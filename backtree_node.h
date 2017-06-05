
#ifndef BACKTREE_NODE_H_
#define BACKTREE_NODE_H_
#include "backtree_node.cpp"

template <class Key,class Data>
class BackTreeNode{
	private:
		Key key;
		Data data;
	public:
		BackTreeNode(Key key,Data data):key(key),data(data){ };
		~BackTreeNode(){};
		Key& getKey(){
			return key;
		}
		Data& getData(){
			return data;
		}
};



#endif /* BACKTREE_NODE_H_ */
