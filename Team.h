/*
 * Team.h
 *
 *  Created on: Apr 27, 2017
 *      Author: amit
 */

#ifndef TEAM_H_
#define TEAM_H_

#include "Student.h"
#include "KVPair.h"
#include "rank_tree.h"

class TeamExcep{
};
class InvalidArgs: public TeamExcep {
};
/*
 * Class for  describing a team in the database of the school.
 */
class Team {
private:
	int team_id;
	int team_size;
	int num_of_wins;
	Pair<int, int> most_powerful;
	RankTree<Student*, Student*> team_students;
	Student** MergeStudsByPower(Student** arr1, int len1, Student** arr2,
			int len2);
public:

	//Creates a new empty team.
	explicit Team(int id);

	//Destroys the current team.
	~Team();

	//Returns team's current size.
	int GetSize();

	//Returns the current team's ID.
	int GetID();

	//Adds a student with the given ID to the current team.
	void AddStudent(Student* student);

	//Removes the student with the given ID.
	void RemoveStudent(Student* student);

	//Returns the most powerful student on the team.
	int MostPowerfulInGroup();

	//Returns the amount of times the current team won against
	//other teams.
	int NumberOfWins();

	//Increases the number of wins of the team by 1.
	void IncWins();

	//Gets the sum of powers of the k most powerful students
	//If the number of students is below k, gets the sum of power of all the students
	int GetSumOfPower(int k);

	//Sets the number of wins for the team, as long as it's
	//more than the  current number.
	void SetWins(int wins);

	//Returns an array of of all students in the current team,
	//and puts the size of the array.
	//NOTE: This function also flushes all students from the team,
	//so it will only be used in UF.
	Student** GetStudentArr(int* size);

	//Takes an array (assuming there are no students in the team)
	//and builds it from the given array.
	bool BuildTeamFromArray(Student** arr, int size);
};

#endif /* TEAM_H_ */
