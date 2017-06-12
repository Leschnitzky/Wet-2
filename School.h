/*
 * School.h
 *
 *  Created on: Jun 10, 2017
 *      Author: amit
 */

#ifndef SCHOOL_H_
#define SCHOOL_H_

#include "Student.h"
#include "Team.h"
#include "KVPair.h"
#include "union_find.h"
#include "HashTable.h"
#include <new>

class Exception {};
class InvalidArg : public Exception {};
class AllocError : public Exception {};
class StudentAlreadyExists : public Exception {};
class StudentNotInSystem : public Exception {};
class TeamHasNoLeader : public Exception {};

/*
 * Class for describing the mutant school of the system.
 */
class School {
private:
	HashTable<Student*> student_id_to_student;
	HashTable<int> student_to_teamID;
	UF<Team> school_teams;
	int num_of_teams;

public:
	//Creates a new school instance, with N teams in it.
	School(int n);

	//Destroys the given School instance.
	~School();

	int NumOfStudents();

	int NumOfTeams();

	//Adds a new student with a given ID and power to the
	//specified team.
	//THROW:
	//InvalidArg
	//StudentAlreadyExists
	//AllocationError
	void AddStudent(int student_id, int team_id, int power);

	//Removes a student from the system, and from the team
	//he was in before being removed.
	void RemoveStudent(int student_id);

	//Joins the two given teams to one bigger team. After
	//this action, the ID's team1 and team2 specify the same team.
	//The number of wins of the joined team is the sum of previous wins.
	//This action is irreversible.
	void JoinTeams(int team1, int team2);

	//Two teams in the school fight (for training only, of course)
	//and every team brings its best NumOfFighters to the fight.
	//The winning team is the one whose sum of powers is greater.
	void TeamFight(int team1, int team2, int num_of_fighters);

	//Returns the number of wins of the certain team.
	int GetNumOfWins(int team);

	//Gets the ID of the leader that the given student is in.
	int GetStudentTeamLeader(int student_id);

};

#endif /* SCHOOL_H_ */
