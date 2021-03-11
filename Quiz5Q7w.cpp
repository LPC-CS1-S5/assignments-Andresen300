#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ofstream outputf;
  int EmployeeID, num, i,emploee ; // to hold for how many employee to process.
  string EmployeeName, DepartmentName;
  double Salary;

  //Open the file
  outputf.open("employee.txt");
  cout << "Enter the number of employees\n";
  cin >> num;

  for( emploee = 0; emploee < num; emploee++ )
  {
      for ( int filds = 0; filds <1; filds++)
       {
        cout << "Enter data\n";
        cin >> EmployeeID;
        cin >> EmployeeName;
        cin >> DepartmentName;
        cin >> Salary;
       
        
          for( i = 0; i < 1; i++ )
          {
            outputf <<  EmployeeID << " ";
            outputf << EmployeeName << " ";
            outputf << DepartmentName << " ";
            outputf << Salary<< endl << endl;
          }
       }
  }
  // Close the file
  outputf.close();
  return 0;
}
