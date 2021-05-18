
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void constructArray (EmpRecords &)

struct EmpRecords {int id;
                   string name;
                   int salary;
                   string depName;
                   int month;
                   int day;
                   int year;};

int main()
{
  ifstream ifs;
  ifs.open("employee.txt");
  EmpRecords emp[6];  //Array of struct

}
