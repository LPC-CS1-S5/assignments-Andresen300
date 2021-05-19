
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct EmpRecords {int id;
                   string name;
                   int salary;
                   string depName;
                   int month;
                   int day;
                   int year;};

void constructArray (EmpRecords &, ifstream &); //construct array with data from the file.
void findSalary (EmpRecords, int);
void findDepartment(EmpRecords, int);

int main()
{
  const int NUM_EMPLOYEES=6;
  EmpRecords emp[NUM_EMPLOYEES];  //Array of struct
  ifstream ifs;
  ifs.open("employee.txt");
  if (ifs.fail())
  {cerr << "File open error\n";
  exit(0);
  }
  for ( int i=0; i<NUM_EMPLOYEES; i++)
  {
    constructArray (emp[i], ifs);
  }
  for ( int i=0; i<3; i++)
  {
  cout << emp[i].id<< endl;
  cout << emp[i].name<< endl;
  cout << emp[i].salary<< endl;
  cout << emp[i].depName<< endl;
  cout << emp[i].month<<"/";
  cout << emp[i].day<<"/";
  cout << emp[i].year<< endl;
  }
  findSalary(emp,NUM_EMPLOYEES);
  findDepartment(emp, NUM_EMPLOYEES);

}
//the constructArray function accepts a EmpRecords variable "emp" by reference and file pass by reference so it will know where it left off everytime with in a for loop.
// data from the file and stores tha input in the argument. 
void constructArray (EmpRecords &emp, ifstream &ifs)
{
   ifs >>emp.id;
   ifs>> emp.name;
   ifs >> emp.salary;
   ifs >> emp.depName;
   ifs >> emp.month;
   ifs >> emp.day;
   ifs>>emp.year;
}
// to find employees with a user specifide salary. pass an structure array to look thrugh 
// each salary 
void findSalary (EmpRecords emp[], size)