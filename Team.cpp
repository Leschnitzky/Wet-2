/*
 * Team.cpp
 *
 *  Created on: Apr 27, 2017
 *      Author: amit
 */

#include "Team.h"
#include "rank_tree.h"

Team::Team(int id) {
	this->team_id = id;
	this->team_size = 0;
	this->most_powerful = Pair(0,0);
	this->num_of_wins = 0;
}

Team::~Team() { }

int Team::GetSize() {
	return this->team_size;
}

int Team::GetID() {
	return this->team_id;
}

void Team::AddStudent(Student* student) {
	if(student == nullptr)
		throw InvalidArg();
	try{
		this->team_students.insertToTree(student,student);
	}
	catch(AlreadyInTree& e){
		throw;
	}

	if((this->most_powerful.GetKey() == -1)
	|| (this->most_powerful.GetValue() < student->GetPower()))
		this->most_powerful = Pair(student->GetID(), student->GetPower());
	this->team_size++;
}

void Team::RemoveStudent(Student* student) {
	try{
		this->team_students.removeFromTree(student);
	}
	catch(NotInTree& e){
		throw;
	}
	this->most_powerful = Pair(team_students.getBiggestKey()->GetID(),
	team_students.getBiggestKey()->GetPower());
	team_size--;
}

int Team::MostPowerfulInGroup() {
	return this->most_powerful.GetKey();
}

int Team::NumberOfWins() {
	return this->num_of_wins;
}

void Team::IncWins() {
	this->num_of_wins++;
}

int Team::GetSumOfPower(int k){
	return this->team_students.CalcSumOfNumber(k);
}

//void Team::UpdateMostPowerful() {
//	bool empty = false;
//	StudentPower most_power;
//	try {
//		most_power = this->team_students.getBiggestKey();
//	} catch(EmptyTree& e) {
//		this->best = StudentPower(0, 0);
//		empty = true;
//	}
//	if(!empty)
//		this->best = most_power;
//	else
//		this->best = StudentPower(0, 0);
//}
//
//StudentPower* Team::ReverseArray(StudentPower* arr, int len) {
//	if(len == 0)
//		return nullptr;
//	StudentPower* reverse = new StudentPower[len];
//	for(int i=0; i<len; i++)
//		reverse[len - i - 1] = arr[i];
//	return reverse;
//}
//
//Student** Team::ReverseStudents(Student** arr, int len) {
//	if(len == 0)
//		return nullptr;
//	Student** reverse = new Student*[len];
//	for(int i=0; i<len; i++)
//		reverse[len - i - 1] = arr[i];
//	return reverse;
//}
//
//int Team::GetCountInGrade(Student** stud_arr, int len, int grade) {
//	int count = 0;
//	for(int i = 0; i < len; i++) {
//		if(stud_arr[i]->GetGrade() == grade)
//			count++;
//	}
//	return count;
//}
//
//Student** Team::StudentsOnlyInGrade(Student** stud_arr, int len, int grade) {
//	int in_grade = GetCountInGrade(stud_arr, this->team_size, grade);
//	Student** only_in_grade = new Student*[in_grade];
//	int place = 0; // place < in_grade
//	for(int i = 0; i < this->team_size; i++) {
//		if(stud_arr[i]->GetGrade() == grade) {
//			only_in_grade[place] = stud_arr[i];
//			place++;
//		}
//	}
//	return only_in_grade;
//}
//
//Student** Team::NotInGrade(Student** studs_arr, int len, int grade) {
//	int in_grade = GetCountInGrade(studs_arr, this->team_size, grade);
//	Student** not_in_grade = new Student*[len - in_grade];
//	int place = 0;
//	for(int i = 0; i < this->team_size; i++) {
//		if(studs_arr[i]->GetGrade() != grade) {
//			not_in_grade[place] = studs_arr[i];
//			place++;
//		}
//	}
//	return not_in_grade;
//}
//
//StudentPower* Team::PowerInGrade(Student** students, StudentPower* power_arr, int len, int grade) {
//	int in_grade = GetCountInGrade(students, this->team_size, grade);
//	StudentPower* power_in_grade = new StudentPower[in_grade];
//	int place = 0;
//	for(int i = 0; i < this->team_size; i++) {
//		if(students[i]->GetGrade() == grade) {
//			power_in_grade[place] = power_arr[i];
//			place++;
//		}
//	}
//	return power_in_grade;
//}
//
//StudentPower* Team::PowerNotGrade(Student** students, StudentPower* power_arr, int len, int grade) {
//	int in_grade = GetCountInGrade(students, this->team_size, grade);
//	StudentPower* power_in_grade = new StudentPower[len - in_grade];
//	int place = 0;
//	for(int i = 0; i < this->team_size; i++) {
//		if(students[i]->GetGrade() != grade) {
//			power_in_grade[place] = power_arr[i];
//			place++;
//		}
//	}
//	return power_in_grade;
//}
//
//Student** Team::MergeStudsByPower(Student** arr1, int len1, Student** arr2, int len2) {
//	Student** res = new Student*[len1 + len2];
//	int i1 = 0, i2 = 0, i3 = 0;
//	while(i1 != len1 && i2 != len2) {
//		if(arr1[i1]->GetPower() > arr2[i2]->GetPower())
//			res[i3++] = arr1[i1++];
//		else
//			res[i3++] = arr2[i2++];
//	}
//	while(i1 < len1)
//		res[i3++] = arr1[i1++];
//	while(i2 < len2)
//		res[i3++] = arr2[i2++];
//	return res;
//}

//StudentPower* Team::MergePairsByPower(StudentPower* arr1, int len1, StudentPower* arr2, int len2) {
//	StudentPower* res = new StudentPower[len1 + len2];
//	int i1 = 0, i2 = 0, i3 = 0;
//	while(i1 != len1 && i2 != len2) {
//		if(arr1[i1].GetPower() > arr2[i2].GetPower())
//			res[i3++] = arr1[i1++];
//		else
//			res[i3++] = arr2[i2++];
//	}
//	while(i1 < len1)
//		res[i3++] = arr1[i1++];
//	while(i2 < len2)
//		res[i3++] = arr2[i2++];
//	return res;
//}
