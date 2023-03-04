#include "Teacher.h"
#include <fstream>

Teacher::Teacher() {
	this->head = NULL;
	this->totalTeachers = 0;
}

void Teacher::add_new_teacher(string firstName, string lastName, string userName, string email, Date registrationDate, string gender, string contactNo, string bloodGroup, string address) {
	if (!head) {
		head = new TeacherNode(firstName, lastName, totalTeachers + 1, userName, email, registrationDate, gender, contactNo, bloodGroup, address);
		totalTeachers++;
		return;
	}

	TeacherNode* temp = head;
	while (temp->next) {
		temp = temp->next;
	}
	temp->next = new TeacherNode(firstName, lastName, totalTeachers + 1, userName, email, registrationDate, gender, contactNo, bloodGroup, address);
	totalTeachers++;
}

TeacherNode* Teacher::edit_teacher(int index) {
	TeacherNode* temp = head;

	for (int i = 0; i < index; i++) {
		temp = temp->next;
	}

	return temp;
}

void Teacher::save_teacher() {
	ofstream outFile;
	outFile.open("teacher.txt");

	if (outFile.is_open()) {
		TeacherNode* temp = head;

		while (temp) {
			if (temp->id != 0) {
				outFile << endl;
				outFile << temp->firstName << endl;
				outFile << temp->lastName << endl;
				outFile << temp->id << endl;
				outFile << temp->userName << endl;
				outFile << temp->email << endl;
				outFile << temp->registrationDate.day << ' ' << temp->registrationDate.month << ' ' << temp->registrationDate.year << endl;
				outFile << temp->gender << endl;
				outFile << temp->contactNo << endl;
				outFile << temp->bloodGroup << endl;
				outFile << temp->address << endl;

				outFile << "-------------------------------------------------------------------------------------------------------";
			}
			temp = temp->next;
		}
	}
}

bool Teacher::load_teacher() {
	ifstream inFile;
	inFile.open("teacher.txt");

	if (!inFile.is_open())
		return false;

	else {

		this->head = new TeacherNode;
		TeacherNode* temp = this->head;

		string discart;

		while (!inFile.eof()) {
			inFile >> temp->firstName;
			inFile >> temp->lastName;
			inFile >> temp->id;
			inFile >> temp->userName;
			inFile >> temp->email;
			inFile >> temp->registrationDate.day >> temp->registrationDate.month >> temp->registrationDate.year;
			inFile >> temp->gender;
			inFile >> temp->contactNo;
			inFile >> temp->bloodGroup;
			inFile >> temp->address;
			inFile >> discart;

			if (!inFile.eof()) {
				temp->next = new TeacherNode;
				this->totalTeachers++;
			}

			temp = temp->next;
		}
	}
	return true;
}

TeacherNode* Teacher::get_head() {
	return this->head;
}