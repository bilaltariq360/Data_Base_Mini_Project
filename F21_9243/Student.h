#pragma once

#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include "StudentNode.h"
using namespace std;

#endif

class Student {
	StudentNode* head;
	int totalStudent;

public:

	Student();
	void add_new_student(string firstName, string lastName, string userName, string email, Date registrationDate, string gender, string contactNo, string bloodGroup, string address, bool feeStatus);
	StudentNode* edit_student(int index);
	void save_student();
	bool load_student();
	StudentNode* get_head();
};

