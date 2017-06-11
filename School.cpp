/*
 * School.cpp
 *
 *  Created on: Jun 10, 2017
 *      Author: amit
 */

#include "School.h"

School::School(int n):number_of_teams(n) {
	this->school_teams = new UF<Team*>(n);
	for (int i=1;i<=n;i++){
		Team* team = new Team(i);
		school_teams.MakeSet(team,i);
	}
	this->student_to_teamID = new HashTable<int>();
}

School::~School() {
	delete this->school_teams;
	delete this->student_to_teamID;

}

void School::AddStudent(int student_id, int team_id, int power) {
	if((student_id <= 0)||(power<=0)||(team_id<=0)||(team_id>=number_of_teams)){
		throw InvalidInput();
	}
	Team* it = school_teams.Find(team_id);
	Student* stu= new Student(student_id,team_id,power);
	it->AddStudent(stu);
}

void School::RemoveStudent(int student_id) {
	if(student_id <=0){
		throw InvalidInput();
	}


}

void School::JoinTeams(int team1, int team2) {

}

void School::TeamFight(int team1, int team2, int num_of_fighters) {

}

int School::GetNumOfWins(int team) {

}

int School::GetStudentTeamLeader(int student_id) {

}
