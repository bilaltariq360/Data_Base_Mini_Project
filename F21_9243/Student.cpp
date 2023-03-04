#include "Student.h"
#include <fstream>

Student::Student() {
	this->head = NULL;
	this->totalStudent = 0;
}

void Student::add_new_student(string firstName, string lastName, string userName, string email, Date registrationDate, string gender, string contactNo, string bloodGroup, string address, bool feeStatus) {
	if (!head) {
		head = new StudentNode(firstName, lastName, totalStudent + 1, userName, email, registrationDate, gender, contactNo, bloodGroup, address, feeStatus);
		totalStudent++;
		return;
	}

	StudentNode* temp = head;
	while (temp->next) {
		temp = temp->next;
	}
	temp->next = new StudentNode(firstName, lastName, totalStudent + 1, userName, email, registrationDate, gender, contactNo, bloodGroup, address, feeStatus);
	totalStudent++;
}

StudentNode* Student::edit_student(int index) {
	StudentNode* temp = head;

	for (int i = 0; i < index; i++) {
		temp = temp->next;
	}

	return temp;
}

void Student::save_student() {
	ofstream outFile;
	outFile.open("student.txt");

	if (outFile.is_open()) {
		StudentNode* temp = head;

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
				outFile << temp->feeStatus << endl;

				outFile << "-------------------------------------------------------------------------------------------------------";
			}
			temp = temp->next;
		}
	}
}

bool Student::load_student() {
	ifstream inFile;
	inFile.open("student.txt");

	if (!inFile.is_open())
		return false;

	else {

		this->head = new StudentNode;
		StudentNode* temp = this->head;

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
			inFile >> temp->feeStatus;
			inFile >> discart;

			if (!inFile.eof()) {
				temp->next = new StudentNode;
				this->totalStudent++;
			}

			temp = temp->next;
		}
	}
	return true;
}

StudentNode* Student::get_head() {
	return head;
}