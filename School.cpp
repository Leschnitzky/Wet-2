/*
 * School.cpp
 *
 *  Created on: Jun 10, 2017
 *      Author: amit
 */

#include "School.h"
#include "union_find.h"

School::School(int n) : school_teams(n) {
	if(n <= 0)
		this->num_of_teams = 0;
	this->num_of_teams = n;
	for (int i = 1; i <= n; i++) {
		Team* team = new Team(i);
		school_teams.MakeSet(*team, i);
	}
}

School::~School() {

}

int School::NumOfStudents() {
	return this->student_id_to_student.Size();
}

int School::NumOfTeams() {
	return this->num_of_teams;
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
	if((team1 <= 0) || (team2 <= 0)
	|| (team1 > this->num_of_teams) || (team2 > this->num_of_teams))
		throw InvalidArg();

	Team* team_1 = this->school_teams.Find(team1);
	Team* team_2 = this->school_teams.Find(team2);
	int size1 = 0, size2 = 0;

	Student** arr1 = team_1->GetStudentArr(&size1);
	Student** arr2 = team_2->GetStudentArr(&size2);

	Student** merged = this->MergeStudsByPower(arr1, size1, arr2, size2);
	int next_size = size1 + size2;
	int team1_wins = team_1->NumberOfWins();
	int team2_wins = team_2->NumberOfWins();

	this->school_teams.Union(team1, team2);

	if(size1 > size2) { //Then merge to team1
		team_1->BuildTeamFromArray(merged, next_size);
		team_1->SetWins(team1_wins + team2_wins);
	}
	else {
		team_2->BuildTeamFromArray(merged, next_size);
		team_2->SetWins(team1_wins + team2_wins);
	}
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

Student** School::MergeStudsByPower(Student** arr1, int len1, Student** arr2, int len2) {
	Student** res = new Student*[len1 + len2];
	int i1 = 0, i2 = 0, i3 = 0;
	while(i1 != len1 && i2 != len2) {
		if(arr1[i1]->GetPower() > arr2[i2]->GetPower())
			res[i3++] = arr1[i1++];
		else
			res[i3++] = arr2[i2++];
	}
	while(i1 < len1)
		res[i3++] = arr1[i1++];
	while(i2 < len2)
		res[i3++] = arr2[i2++];
	return res;
}
