/*
 * School.cpp
 *
 *  Created on: Jun 10, 2017
 *      Author: amit
 */

#include "School.h"

School::School(int n) {
	this->num_of_teams = n;
	for (int i = 1; i <= n; i++) {
		Team* team = new Team(i);
		school_teams.MakeSet(*team, i);
	}
}

School::~School() {
	delete this->school_teams;
	delete this->student_to_teamID;

}

void School::AddStudent(int student_id, int team_id, int power) {
	if (student_id <= 0 || team_id <= 0 || power <= 0
			|| team_id > this->num_of_teams)
		throw InvalidArg();
	if (this->student_id_to_student.Find(student_id))
		throw StudentAlreadyExists();
	Student* adding = nullptr;
	try {
		adding = new Student(student_id, power);
	} catch (std::bad_alloc& e) {
		throw AllocError();
	}
	this->student_id_to_student.Insert(student_id, adding);
	this->student_to_teamID.Insert(student_id, team_id);
	Team* stud_team = this->school_teams.Find(team_id);
	stud_team->AddStudent(adding);
}

void School::RemoveStudent(int student_id) {
	if (student_id <= 0)
		throw InvalidArg();
	if (this->student_id_to_student.Find(student_id) == false)
		throw StudentNotInSystem();
	Student* student_full = this->student_id_to_student.At(student_id);
	this->student_id_to_student.Delete(student_id);
	int prev_team = this->student_to_teamID.At(student_id);
	Team* student_old_team = this->school_teams.Find(prev_team);
	student_old_team->RemoveStudent(student_full);
}

void School::JoinTeams(int team1, int team2) {

}

void School::TeamFight(int team1, int team2, int num_of_fighters) {
	if ((team1 <= 0) || (team2 <= 0) || (team1 >= num_of_teams)
			|| (team2 >= num_of_teams) || (num_of_fighters < 0)) {
		throw InvalidArg();
	}
	Team* team_1 = school_teams.Find(team1);
	Team* team_2 = school_teams.Find(team2);
	if (team_1->GetID() == team_2->GetID()) {
		return;
	}
	int power_1 = team_1->GetSumOfPower(num_of_fighters);
	int power_2 = team_2->GetSumOfPower(num_of_fighters);
	if (power_1 > power_2) {
		team_1->IncWins();
	} else if (power_2 > power_1) {
		team_2->IncWins();
	}
	return;
}

int School::GetNumOfWins(int team) {
	if (team <= 0 || team > this->num_of_teams)
		throw InvalidArg();
	Team* get_wins = this->school_teams.Find(team);
	return get_wins->NumberOfWins();
}

int School::GetStudentTeamLeader(int student_id) {
	if (student_id <= 0)
		throw InvalidArg();
	if (this->student_id_to_student.Find(student_id) == false)
		throw StudentNotInSystem();
	int student_team = this->student_to_teamID.At(student_id);
	Team* current_team = this->school_teams.Find(student_team);
	int leader_id = current_team->MostPowerfulInGroup();
	if (leader_id == -1)
		throw TeamHasNoLeader();
	return leader_id;
}
