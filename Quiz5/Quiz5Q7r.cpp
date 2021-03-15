#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ifstream inputf;
  int EmployeeID, num=2, i ; // to hold for how many employee to process.
  string EmployeeName, DepartmentName;
  double Salary, average, counter, totalSalary=0;
  //Open the file
  inputf.open("employee.txt");
  //if the file successfully opened, procces it.
  if (inputf)
  {
    // Read  and display data
    inputf >>num 
    cout <<num << endl;
    for (i=0; i<num;i++)
    {
      inputf>>EmployeeID;
      inputf>>EmployeeName;
      inputf >> DepartmentName;
      inputf >>Salary;

      cout <<EmployeeID << " "<<EmployeeName <<" "<< DepartmentName<<" "<<Salary << endl;
      totalSalary+=Salary;
      counter+=1;
    }

  }
  average = totalSalary/counter;
  cout << "Total "<<totalSalary<< "   Average "<<average << endl;
}