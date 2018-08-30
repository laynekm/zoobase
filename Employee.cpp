#include "Employee.h"

int Employee::numOfEmployees = 0;

Employee::Employee(string n) {
	stringstream ss;
	ss << setw(4) << setfill('0') << numOfEmployees;
	id = "EM-" + ss.str();

	name = n;

	numOfEmployees++;
}

Employee::~Employee() {

}

Handler::Handler(string n) : Employee(n) {
	type = "Handler";
}

Maintenance::Maintenance(string n, string s) : Employee(n) {
	type = "Maintenance";
	subtype = s;
}

Admin::Admin(string n, string s) : Employee(n) {
	type = "Admin";
	subtype = s;
}

void Employee::toString(string& returnString) {
	returnString = "";

	stringstream ss;
	ss << left;
	ss << setw(16) << "ID: " << setw(12) << id << endl;
	ss << setw(16) << "Type: " << setw(12) << type << endl;
	ss << setw(16) << "Name: " << setw(12) << name << endl;
	ss << setw(16) << "Subtype: " << setw(12) << subtype << endl;

	returnString = ss.str();
}

//getters
string Employee::getID()		{return id;}
string Employee::getName()		{return name;}
string Employee::getType()		{return type;}
string Employee::getSubtype()	{return subtype;}

//setters (id and type should not have setters)
void Employee::setName(string n)	{name = n;}
void Employee::setSubtype(string s) {subtype = s;}