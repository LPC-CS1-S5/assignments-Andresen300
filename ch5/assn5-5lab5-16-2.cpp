// Reading the student information
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
  int N, count, Totalscores;
  string stuName;
  double score1,score2, average, averageClass, sum, total=0;

  cout <<"Enter the number of student: ";
  cin >> N;

  ifstream ifs;
  ifs.open("stuRecord.txt");
  if (!ifs)
  {
    cout << "Open Error\n";
    exit(0);
  }

  for ( count=1; count <=N; count++)
  {
    sum=0;
    ifs >>stuName >> score1 >> score2;
    cout << stuName<< " " << score1 << " "<< score2 << endl;
    sum = score1 + score2;
    average = sum/2;
    cout << "Average score is "<< average << endl;
    total+=average;
  }
  averageClass = total/N;
  cout << "Average for the class is: "<<averageClass;
  
  ifs.close();
}
