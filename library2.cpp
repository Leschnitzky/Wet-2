/*
 * library2.cpp
 *
 *  Created on: Jun 16, 2017
 *      Author: amit
 */

#include "library2.h"
#include "School.h"

void* Init(int n) {
	School* instance = new School(n);
	if(instance == NULL) {
		return NULL;
	}
	return instance;
}

StatusType AddStudent(void *DS, int StudentID, int Team ,int Power) {
	if(DS == NULL)
		return INVALID_INPUT;
	try {
		((School*)DS)->AddStudent(StudentID, Team, Power);
		return SUCCESS;
	} catch(InvalidArg& e) {
		return INVALID_INPUT;
	} catch(StudentAlreadyExists& e) {
		return FAILURE;
	} catch(AllocError& e) {
		return ALLOCATION_ERROR;
	}
}

StatusType RemoveStudent(void *DS, int StudentID) {
	if(DS == NULL)
		return INVALID_INPUT;
	try {
		((School*)DS)->RemoveStudent(StudentID);
		return SUCCESS;
	} catch(InvalidArg& e) {
		return INVALID_INPUT;
	} catch(StudentNotInSystem& e) {
		return FAILURE;
	}
}

StatusType JoinTeams(void *DS, int Team1, int Team2) {
	if(DS == NULL)
		return INVALID_INPUT;
	try {
		((School*)DS)->JoinTeams(Team1, Team2);
		return SUCCESS;
	} catch(InvalidArg& e) {
		return INVALID_INPUT;
	} catch(AllocError& e) {
		return ALLOCATION_ERROR;
	}
}

StatusType TeamFight(void *DS, int Team1, int Team2, int NumOfFighters) {
	if(DS == NULL)
		return INVALID_INPUT;
	try {
		((School*)DS)->TeamFight(Team1, Team2, NumOfFighters);
		return SUCCESS;
	} catch(InvalidArg& e) {
		return INVALID_INPUT;
	}
}

StatusType GetNumOfWins(void *DS, int Team, int* Wins) {
	if(DS == NULL || Wins == NULL)
		return INVALID_INPUT;
	try {
		*Wins = ((School*)DS)->GetNumOfWins(Team);
		return SUCCESS;
	} catch(InvalidArg& e) {
		return FAILURE;
	}
}

StatusType GetStudentTeamLeader(void *DS, int StudentID, int* Leader) {
	if(DS == NULL || Leader == NULL)
		return INVALID_INPUT;
	try {
		*Leader = ((School*)DS)->GetStudentTeamLeader(StudentID);
		return SUCCESS;
	} catch(InvalidArg& e) {
		return INVALID_INPUT;
	} catch(StudentNotInSystem& e) {
		return FAILURE;
	} catch(TeamHasNoLeader& e) {//Shouldn't happen, just in case
		return FAILURE;
	}
}

void Quit(void** DS) {
	if(DS == NULL)
		return;
	delete ((School*)(*DS));
	*DS = NULL;
}
