/*
 * Team.cpp
 *
 *  Created on: Apr 27, 2017
 *      Author: amit
 */

#include "Team.h"
#include "rank_tree.h"

Team::Team(int id): most_powerful(0,0) {
	this->team_id = id;
	this->team_size = 0;
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
		throw InvalidArgs();
	try{
		this->team_students.insertToTree(student,student);
	}
	catch(AlreadyInTree& e){
		throw;
	}

	//If currently empty OR new power is greater
	if((this->most_powerful.GetKey() == 0)
	|| (this->most_powerful.GetValue() < student->GetPower()))
		this->most_powerful = Pair<int,int>(student->GetID(), student->GetPower());
	//If new power is greater and new ID is smaller
	if(this->most_powerful.GetValue() == student->GetPower())
		if(this->most_powerful.GetKey() > student->GetID())
			this->most_powerful = Pair<int, int>(student->GetID(), student->GetPower());
	this->team_size++;
	//std::cout << "In AddStudent " << student->GetID() << std::endl;
	//std::cout << "-- Is valid? " << this->team_students.IsTreeValid() << std::endl;
	//if(!(team_students.IsTreeValid())){
		//this->team_students.PrintInorder();
	//}
}

void Team::RemoveStudent(Student* student) {
	try{
		this->team_students.removeFromTree(student);
	}
	catch(NotInTree& e){
		throw;
	}
	this->team_size--;
	if(this->team_size == 0) {
		this->most_powerful = Pair<int, int>(0, 0);
		return;
	}
	Student* next_most = this->team_students.getBiggestKey();
	this->most_powerful = Pair<int,int>(next_most->GetID(), next_most->GetPower());
	//std::cout << "In RemoveStudent " << student->GetID() << std::endl;;
	//std::cout << "-- Is valid? " << this->team_students.IsTreeValid() << std::endl;
}

int Team::MostPowerfulInGroup() {
	return this->most_powerful.GetKey();
}
int Team::PowerInGroup() {
	return this->most_powerful.GetValue();
}

void Team::UpdateMostPower(int key,int value){
	this->most_powerful= Pair<int,int>(key,value);
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

void Team::SetWins(int wins) {
	if(wins < this->num_of_wins)
		return;
	this->num_of_wins = wins;
}

Student** Team::GetStudentArr(int* size) {
	if(size == nullptr)
		return nullptr;
	int actual = this->team_students.size();
	Student** output = nullptr;
	try {
		output = this->team_students.GetTreeKeys();
	} catch(std::bad_alloc& e) {
		throw;
	}
	*size = actual;
	this->team_students.DeleteEntireTree();
	return output;
}

bool Team::BuildTeamFromArray(Student** arr, int size) {
	if(this->team_students.size() > 0)
		return false;
	Pair<Student*, Student*>* update_arr = new Pair<Student*, Student*>[size];
	for(int i = 0; i < size; i++) {
		update_arr[i] = Pair<Student*, Student*>(arr[i], arr[i]);
	}
	this->team_students.UpdateTreeFromPairArr(update_arr, size);
	this->team_size=size;
	delete[] update_arr;
	return true;
}
//Student** Team::ReverseStudents(Student** arr, int len) {
//	if(len == 0)
//		return nullptr;
//	Student** reverse = new Student*[len];
//	for(int i=0; i<len; i++)
//		reverse[len - i - 1] = arr[i];
//	return reverse;
//}
