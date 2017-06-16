/*
 * HTtesting.cpp
 *
 *  Created on: Jun 5, 2017
 *      Author: amit
 */

#include <iostream>
#include <stdio.h>
#include "HashTable.h"
#include "KVPair.h"
//
//void TestCreateDestroySize() {
//	std::cout << "Creating new hash table...\n";
//	HashTable<char> htable;
//	std::cout << "Amount of items in new table is " << htable.Size() << std::endl;
//}
//
//void TestInsertDelete() {
//	std::cout << "Creating new table...\n";
//	HashTable<char> htable;
//	std::cout << "Created table.\n";
//	std::cout << "Inserting a few items...\n";
//	for(int i = 97; i <= 122; i++) {
//		htable.Insert(i, char(i));
//	}
//	std::cout << "Items inserted.\n";
//	std::cout << "Amount of items is now: " << htable.Size() << std::endl;
//	std::cout << "Deleting a,b,c,...\n";
//	htable.Delete(97);
//	htable.Delete(98);
//	htable.Delete(99);
//	std::cout << "Amount of items is now: " << htable.Size() << std::endl;
//}
//
//void TestInsertWithResize() {
//	std::cout << "Creating new table...\n";
//	HashTable<int> htable;
//	std::cout << "Created table.\n";
//	std::cout << "Inserting a few items...\n";
//	for(int i = 0; i < 1000; i++) {
//		htable.Insert(i, i);
//	}
//	std::cout << "Items inserted.\n";
//	std::cout << "Amount of items is now: " << htable.Size() << std::endl;
//	for(int i = 1000; i < 3000; i++) {
//		htable.Insert(i, i);
//		if(htable.Size() != i + 1) {
//			std::cout << htable.Size() << std::endl;
//			std::cout << i << std::endl;
//			break;
//		}
//	}
//	std::cout << "More items inserted.\n";
//	std::cout << "Amount of items is now: " << htable.Size() << std::endl;
//}
//
//void TestBIG() {
//	std::cout << "Creating new table...\n";
//	HashTable<int> htable;
//	std::cout << "Created table.\n";
//	std::cout << "Inserting a few items...\n";
//	for(int i = 0; i < 9000; i++) {
//		htable.Insert(i, i);
//	}
//	std::cout << "Items inserted.\n";
//	std::cout << "Searching for all items in table...\n";
//	bool found = true;
//	for(int i = 0; i < 9000; i++) {
//		found = found && htable.Find(i);
//	}
//	std::cout << "All found? " << found << std::endl;
//	std::cout << "Size of table is now " << htable.Size() << std::endl;
//	std::cout << "Deleting non-existing item...\n";
//	try {
//		htable.Delete(10000);
//		std::cout << "BAD\n";
//	} catch(KeyNotInTableException& e) {
//		std::cout << "Item not in table.\n";
//	}
//	std::cout << "Inserting existing item...\n";
//	try {
//		htable.Insert(1000, 1000);
//		std::cout << "BAD\n";
//	} catch(AlreadyInTableException& e) {
//		std::cout << "Key already in table.\n";
//	}
//	std::cout << "Deleting all items above 1000...\n";
//	try {
//		for(int i = 8999; i >= 1000; i--) {
//			htable.Delete(i);
//		}
//	} catch(KeyNotInTableException& e) {
//		std::cout << "Error, key not in table.\n";
//	}
//	std::cout << "Size of table is now " << htable.Size() << std::endl;
//}
//
//int main() {
//	std::cout << "TestCreateDestroySize" << std::endl;
//	TestCreateDestroySize();
//	std::cout << "TestInsertDelete" << std::endl;
//	TestInsertDelete();
//	std::cout << "TestInsertWithResize" << std::endl;
//	TestInsertWithResize();
//	std::cout << "TestBIG" << std::endl;
//	TestBIG();
//}
