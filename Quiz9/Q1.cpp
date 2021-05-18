/*We are going to declare the structure for the Employee record. The record contains a couple of personal information for an employee such as

ID: 6 digits numeric value 
Name: First and last name. ( Two words)
Salary: Annual salary (0 ~ 500000)
Department name: The department that the employee works for ( one word)
Date: The date which the employee starts to work in this company(Mon Day Year)
The data type for each member data of structure can be declared with the built-in data type or user-defined another structure. The design of the structure depends on the programmer.*/
#include <iostream>
#include <string>

using namespace std;
struct Date { int month;
              int day;
              int year;};

struct EmpRecords {int id;
                   string name;
                   int salary;
                   string depName;};


