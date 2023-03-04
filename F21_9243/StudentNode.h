#pragma once

#ifndef STUDENTNODE_H
#define STUDENTNODE_H

#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

#endif

struct StudentNode {
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
	bool feeStatus;
	StudentNode* next;

	StudentNode();
	StudentNode(string firstName, string lastName, int id, string userName, string email, Date registrationDate, string gender, string contactNo, string bloodGroup, string address, bool feeStatus);
};

