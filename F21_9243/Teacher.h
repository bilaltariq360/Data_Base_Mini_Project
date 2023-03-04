#pragma once

#ifndef TEACHER_H
#define TEACHER_H

#include <iostream>
#include <string>
#include "TeacherNode.h"
using namespace std;

#endif

class Teacher {
	TeacherNode* head;
	int totalTeachers;

public:

	Teacher();
	void add_new_teacher(string firstName, string lastName, string userName, string email, Date registrationDate, string gender, string contactNo, string bloodGroup, string address);
	TeacherNode* edit_teacher(int index);
	void save_teacher();
	bool load_teacher();
	TeacherNode* get_head();
};