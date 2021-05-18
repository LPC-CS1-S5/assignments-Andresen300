
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

void constructArray (EmpRecords &); // To construct array with data read from the file.

int main()
{
  EmpRecords emp[3];  //Array of struct
  for ( int i=0; i<3; i++)
  {
    constructArray (emp[i]);
  }
  for ( int i=0; i<3; i++)
  cout << emp[i].id<< endl;
  cout << emp[i].name<< endl;
  cout << emp[i].salary<< endl;
  cout << emp[i].depName<< endl;
  cout << emp[i].month<<"/"<< endl;
  cout << emp[i].day<<"/"<< endl;
  cout << emp[i].year<< endl;

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
  }
   cout<<"Employee id"<<endl;
   cin >>emp.id; 
   cout <<"name"<< endl;
   cin >> emp.name;
   cout <<"salary\n";
   cin >> emp.salary;
   cout << "depName\n";
   cin >> emp.depName;
   cout << " month, day , year\n";
   cin >> emp.month;
   cin >> emp.day;
   cin>>emp.year;
}