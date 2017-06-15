/*

 * School_test.cpp
 *
 *  Created on: Jun 14, 2017
 *      Author: leschnitzky
 */
using namespace std;
#include "School.h"

int main() {
	bool test = true;
	cout << "Checking school creation... \n";

	try {
		cout << "1";
		School school = School(-3);
		test = false;
		cout <<"*";
	} catch (...) {
	}
	try {
		cout << "2...";
		School school = School(0);
		test = true;
		//cout <<"*";
	} catch (...) {
	}
	if (!test) {
		cout << "Bad! \n";
		return 0;
	}
	cout << "Good! \n";
	School school = School(5);
	cout << "Checking add student ... \n";
	test = true;
	try {
		school.AddStudent(0, 1, 10);
		test = false;
		cout <<"*";
	} catch (...) {
		cout << "1";
	}
	try {
		school.AddStudent(1, 0, 10);
		test = false;
		cout <<"*";
	} catch (...) {
		cout << " 2";
	}
	try {
		school.AddStudent(0, 1, 10);
		test = false;
		cout <<"*";
	} catch (...) {
		cout << " 3";
	}
	school.AddStudent(1, 1, 10);
	try {
		school.AddStudent(1, 2, 10);
		test = false;
		cout <<"*";
	} catch (...) {
		cout << "4...";
	}
	if (!test) {
		cout << "Bad! \n";
		return 0;
	}
	school.AddStudent(2, 1, 10);
	cout << "Good! \n";
	cout << "Checking remove student... \n";
	test = true;
	school.AddStudent(3, 1, 10);
	school.AddStudent(4, 2, 10);
	school.AddStudent(5, 1, 10);
	try {
		cout << "1";
		school.RemoveStudent(-6);
		test = false;
		cout <<"*";
	} catch (...) {
	}
	try {
		cout << " 2";
		school.RemoveStudent(6);
		test = false;
		cout <<"*";
	} catch (...) {
	}

	try {
		school.RemoveStudent(2);
		cout << " 3";
		school.RemoveStudent(2);
		test = false;
		cout <<"*";
	} catch (...) {
	}
	school.RemoveStudent(4);
	cout << " 4...";
	if (school.NumOfStudents() != 3) {
		test = false;
		cout <<"*";
	}
	if (!test) {
		cout << "Bad!... \n";
		return 0;
	}
	cout << "Good! \n";
	cout << "Checking join teams... \n";
	try {
		cout << "1";
		school.JoinTeams(0, 3);
		test = false;
		cout <<"*";
	} catch (...) {
	}
	try {
		cout << " 2";
		school.JoinTeams(2, -3);
		test = false;
		cout <<"*";
	} catch (...) {
	}
	try {
		cout << " 3";
		school.JoinTeams(2, 6);
		test = false;
		cout <<"*";
	} catch (...) {
	}
	try {
		cout << " 4";
		school.JoinTeams(3, 3);
	} catch (...) {
		test = false;
		cout <<"*";
	}
	school.JoinTeams(1, 2);
	try {
		cout << " 5";
		school.JoinTeams(2, 1);
	} catch (...) {
		test = false;
		cout <<"*";
	}
	cout << " 6...";
	if (school.NumOfTeams() != 4) {
		test = false;
		cout <<"*";
	}
	if (!test) {
		cout << "Bad!\n";
		return 0;
	}
	cout <<"Good! \n";
	cout <<"Checking team fight... \n";
	school.AddStudent(2,3,50);
	school.AddStudent(6,2,20);
	try {
		school.TeamFight(6,3,3);
		cout << " 1";
		test = false;
		cout <<"*";
	} catch (...) {
	}
	try {
		school.TeamFight(3,-2,3);
		cout << " 2";
		test = false;
		cout <<"*";
	} catch (...) {
	}
	try {
		school.TeamFight(1,3,-1);
		cout << " 3";
		test = false;
		cout <<"*";
	} catch (...) {
	}
	cout <<" 4";
	school.TeamFight(1,3,4);
	school.TeamFight(2,3,4);
	if(school.GetNumOfWins(3)!=0){
		test = false;
		cout <<"*";
	}
	cout <<" 5";
	school.AddStudent(7,2,40);
	school.TeamFight(1,3,2);
	if(school.GetNumOfWins(1)==0){
		test = false;
		cout <<"*";
	}
	cout <<"6...";
	school.AddStudent(8,3,11);
	school.TeamFight(1,3,2);
	if(school.GetNumOfWins(3)==0){
		test = false;
		cout <<"*";
	}
	if(!test){
		cout<<"Bad!\n";
		return 0;
	}
	cout <<"Good!\n";
	cout <<"Checking team leader...\n";
	test = true;
	try{
		cout<<"1";
		school.GetStudentTeamLeader(-3);
		test = false;
		cout <<"*";
	}
	catch(...){
	}
	try{
		cout<<" 2";
		school.GetStudentTeamLeader(4);
		test = false;
		cout <<"*";
	}
	catch(...){
	}
	cout <<" 3";
	int leader = school.GetStudentTeamLeader(8);
	if(leader != 2){
		test = false;
		cout <<"*";
	}
	cout <<" 4";
	leader = school.GetStudentTeamLeader(5);
	if(leader != 7){
		test = false;
		cout <<"*";
	}
	cout <<" 5";
	school.RemoveStudent(7);
	leader = school.GetStudentTeamLeader(5);
	if(leader != 6){
		test = false;
		cout <<"*";
	}
	cout <<" 6...";
	school.RemoveStudent(2);
	leader = school.GetStudentTeamLeader(8);
	if(leader !=8){
		test = false;
		cout <<"*";
	}
	if(!test){
		cout <<"Bad!\n";
		return 0;
	}
	cout <<"Good!\n";
	cout <<"All tests have been passed for school!\n";
}

