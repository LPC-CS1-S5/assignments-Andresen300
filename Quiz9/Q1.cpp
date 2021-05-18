
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void constructArray (EmpRecords &) // To construct array with data read from the file.

struct EmpRecords {int id;
                   string name;
                   int salary;
                   string depName;
                   int month;
                   int day;
                   int year;};

int main()
{
  EmpRecords emp[6];  //Array of struct
  for (int i=0; i<6; i++)
  {
    constructArray (emp[]);
  }

}
//the constructArray function accepts a EmpRecords variable "emp" by reference. it reads
// data from the file and stores tha input in the argument.
void constructArray (EmpRecords &emp)
{
  ifstream ifs;
  ifs.open("employee.txt");
  if (ifs.fail())
  {cerr << "File open error\n";
  exit(0);
  getline(cin, emp.id);
  cout << emp.id;
  }
}