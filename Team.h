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

class TeamExcep: public std::exception {
};
class InvalidArg: public TeamExcep {
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
};

#endif /* TEAM_H_ */
