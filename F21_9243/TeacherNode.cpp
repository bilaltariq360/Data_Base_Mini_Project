#include "TeacherNode.h"

TeacherNode::TeacherNode() {
	this->firstName = "";
	this->lastName = "";
	this->id = 0;
	this->userName = "";
	this->email = "";
	this->registrationDate.day = 0;
	this->registrationDate.month = 0;
	this->registrationDate.year = 0;
	this->gender = "";
	this->contactNo = "";
	this->bloodGroup = "";
	this->address = "";
	this->next = NULL;
}

TeacherNode::TeacherNode(string firstName, string lastName, int id, string userName, string email, Date registrationDate, string gender, string contactNo, string bloodGroup, string address) {
	this->firstName = firstName;
	this->lastName = lastName;
	this->id = id;
	this->userName = userName;
	this->email = email;
	this->registrationDate.day = registrationDate.day;
	this->registrationDate.month = registrationDate.month;
	this->registrationDate.year = registrationDate.year;
	this->gender = gender;
	this->contactNo = contactNo;
	this->bloodGroup = bloodGroup;
	this->address = address;
	this->next = NULL;
}