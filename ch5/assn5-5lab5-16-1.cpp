//Writing the student information
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
  int N;
  string stuName;
  double score1, score2;

  cout << "Enter the number of students:";
  cin >> N;

  ofstream ofs;
  ofs.open("stuRecord.txt");
  if (!ofs)
  {
    cout << "Open Error\n";
    exit(0);
  }

  for (int count=0; count <N; count++)
  {
    cout << "Entere student name and two scores\n";
    cin >> stuName;
    cin >> score1 >> score2;
    ofs << stuName << " " << score1 << " "<< score2 <<;
    
  }
  ofs.close();
}
