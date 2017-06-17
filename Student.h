/*
 * Student.h
 *
 *  Created on: Apr 27, 2017
 *      Author: amit
 */

#ifndef STUDENT_H_
#define STUDENT_H_
#ifndef nullptr
#define nullptr 0
#endif

/*
 * Class for describing a single student of the school.
 */

class Student {
private:
	int student_id;
	int power;
public:

	//Creates a new student with a given ID, grade, and power.
	explicit Student(int id, int power);

	//Destroys the current student.
	~Student();

	//Returns the ID of the current student.
	int GetID();

	//Returns the student's power.
	int GetPower();

	//Compares 2 students by their power.
	bool operator<(const Student& other);

	//Checks if two students are equal by comparing hteir ID numbers.
	bool operator==(const Student& other);

	//Adds an int to a student (addition to power)
	int operator+(int sum);

	operator int() const;
};

#endif /* STUDENT_H_ */
