/*
 * UF_test.cpp
 *
 *  Created on: Jun 5, 2017
 *      Author: leschnitzky
 */
#include "union_find.h"
#include <iostream>
#include <string>
using namespace std;
int main() {
	UF<string> test = UF<string>(5);
	bool test_pass = true;
	test.MakeSet("a", 0);
	test.MakeSet("b", 1);
	test.MakeSet("c", 2);
	test.MakeSet("d", 3);
	test.MakeSet("e", 4);
	cout << "Checking numbers... \n";
	for (int i = 1; i < 5; i++) {
		if (test.Find(0) == test.Find(i)) {
			cout << "Bad, some groups are equal \n";
		}
	}
	try {
		test_pass = false;
		test.Find(7);
	} catch (Invalid_Index&) {
		test_pass = true;
	}
	if (!test_pass) {
		cout << "Bad, failed at bad index \n";
	}
	try {
		test_pass = false;
		test.Find(-3);
		test.MakeSet("f", -45);
		test.MakeSet("f", 67);
	} catch (Invalid_Index&) {
		test_pass = true;
	}
	if (!test_pass) {
		cout << "Bad, failed at bad index \n";
	}
	try {
		test_pass = false;
		test.MakeSet("f", 3);
	} catch (Not_Empty&) {
		test_pass = true;
	}
	if (!test_pass) {
		cout << "Bad, failed at not empty \n";
	} else {
		cout << "Good! \n";
	}

	cout << "Checking find... \n";
	for (int i = 0; i < 5; i++) {
		if (test.Find(i) == nullptr) {
			cout << "Bad, failed at bad teams \n";
		}
		if (*test.Find(1) != "b") {
			cout << "Bad, result not saved \n";
		}
	}
	test_pass = false;
	try {
		test.Find(-2);
		test.Find(7);
	} catch (Invalid_Index&) {
		test_pass = true;
	}
	if (!test_pass) {
		cout << "Bad, failed at bad index \n";
	}
	cout << "Good! \n";

	cout << "Checking Union... \n";
	test.Union(2,2);
	test.Union(2,4);
	test.Union(3,4);
	if (*test.Find(2) == "c"){
		cout << "Bad,failed at union \n";
	}
	if(*test.Find(3) != "e"){
		cout << "Bad, failed at union \n";
	}
	if(test_pass){
		cout << "Well done! all test have been passed";
		return 0;
	}
	cout <<"Failed";


	return 0;

}

