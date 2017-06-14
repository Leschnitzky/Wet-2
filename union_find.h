/*
 * Union_find.h
 *
 *  Created on: Jun 3, 2017
 *      Author: leschnitzky
 */

#ifndef UNION_FIND_H_
#define UNION_FIND_H_

#include "List.h"
#include <iostream>

class UF_Exception: public std::exception {
};
class Not_Empty: public UF_Exception {
};
class Teams_Not_Roots: public UF_Exception {
};
class Invalid_Index: public UF_Exception {
};

template<class SetElement>
class UF {
private:
	SetElement** element_data;
	int* parent;
	int* size;
	int array_size;
public:
	UF(int n) :
			array_size(n) {
		if (n < 0) {
			throw Invalid_Index();
		}
		parent = new int[array_size];
		size = new int[array_size];
		element_data = new SetElement*[array_size];
		for (int i = 0; i < array_size; i++) {
			element_data[i] = nullptr;
			parent[i] = -1;
			size[i] = 0;
		}
	}
	~UF() {
		for (int i = 0; i < array_size; i++) {
			delete element_data[i];
		}
		delete[] element_data;
		delete[] size;
		delete[] parent;
	}
	void MakeSet(SetElement elm, int i) {
		if ((i > array_size) || (i < 0)) {
			throw Invalid_Index();
		}
		if (element_data[i-1] != nullptr) {
			throw Not_Empty();
		}
		element_data[i-1] = new SetElement(elm);
		size[i-1] = 1;
	}
	SetElement* Find(int i) {
		if ((i > array_size) || (i < 0)) {
			throw Invalid_Index();
		}
		int index = i;
		List<int> indices;

		indices.PushBack(i);
		while (parent[index] != -1) {
			index = parent[index];
			indices.PushBack(index);
		}
		indices.RemoveLast();
		typename List<int>::Iterator it(indices, false);
		while (indices.Size() != 0) {
			parent[*it] = i;
			try {
				it.Prev();
			} catch (IteratorAtStart& e) {
				return element_data[index];
			}
			indices.RemoveLast();
		}
		return element_data[index];
	}

	void Union(int p, int q) {
		if ((size[p] == 0) || (size[q] == 0)) {
			throw Teams_Not_Roots();
		}
		if (p == q) {
			return;
		}
		if (size[p] > size[q]) {
			size[p] += size[q];
			size[q] = 0;
			parent[q] = p;
		}
		size[q] += size[p];
		parent[p] = q;
		size[p] = 0;
	}
};

#endif /* UNION_FIND_H_ */
