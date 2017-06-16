/*
 * library2.cpp
 *
 *  Created on: Jun 16, 2017
 *      Author: amit
 */

#include "library2.h"
#include "School.h"

void* Init(int n) {
	School instance = new School(n);
	if(instance == NULL) {
		return NULL;
	}
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

}

StatusType TeamFight(void *DS, int Team1, int Team2, int NumOfFighters) {

}

StatusType GetNumOfWins(void *DS, int Team, int* Wins) {

}

StatusType GetStudentTeamLeader(void *DS, int StudentID, int* Leader) {

}

void Quit(void** DS) {
	if(DS == NULL)
		return;
	delete ((School*)(*DS));
	*DS = NULL;
}
