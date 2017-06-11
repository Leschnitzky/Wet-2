/*
 * Student.cpp
 *
 *  Created on: Apr 27, 2017
 *      Author: amit
 */

#include "Student.h"

Student::Student(int id, int power) {
	this->student_id = id;
	this->power      = power;
}

Student::~Student() { }

int Student::GetID() {
	return this->student_id;
}

int Student::GetPower() {
	return this->power;
}

bool Student::operator<(const Student& other) {
	if(this->power < other.power)
		return true;
	else if(this->power == other.power && this->student_id < other.student_id)
		return false;
	else
		return true;
}

bool Student::operator==(const Student& other) {
	return this->student_id == other.student_id;
}

int Student::operator+(int power){
	return this->power+power;
}
