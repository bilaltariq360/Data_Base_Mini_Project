#pragma once

#ifndef TEACHERNODE_H
#define TEACHERNODE_H

#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

#endif

struct TeacherNode {
	string firstName;
	string lastName;
	int id;
	string userName;
	string email;
	Date registrationDate;
	string gender;
	string contactNo;
	string bloodGroup;
	string address;
	TeacherNode* next;

	TeacherNode();

	TeacherNode(string firstName, string lastName, int id, string userName, string email, Date registrationDate, string gender, string contactNo, string bloodGroup, string address);
};