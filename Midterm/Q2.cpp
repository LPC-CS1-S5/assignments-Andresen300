//Make the program that reads the student's name and two scores
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
  int score, totalscores;
  int score1, score2;  //to hold the data Read from the file
  string stuName;
  double avg, sum, greatAvg=0;

  ifstream ifs;
  ifs.open("students.txt");
  if(!ifs)
  {
    cout << "Open Read Error\n";
    exit(0);
  }

  //Read the information form the file and  display int
  while (ifs >> stuName >> score1 >> score2) // you can read all together
  {
    sum = 0;
    cout << "Student name: "<< stuName <<"  "<<score1 << "  "<< score2<<  endl;
    sum = score1+score2;
    avg = sum/2;
    cout << "Sum: " << sum << "   "<<"Avg: "<< avg << endl; 
    if (avg >80)
    {
      greatAvg++;
    }
  }
  cout << "Total number of students whose average is greater then 80: "<<greatAvg << endl;
}