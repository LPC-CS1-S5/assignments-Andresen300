#include <iostream>
#include <fstream>

using namespace std;

const int NUMCOURSE=2;

struct Student
{int id;
 string name;
 int score[NUMCOURSE];
 int sum;
 int avg;
 };
int main()
{
  ifstream ifs;
  int i, count;
  Student s;   //s is a variable name with a struct data type
  ifs.open("students.txt");
  if (!ifs)
  {
    cout << "File open error\n";
    exit(0);
  }
  while (ifs >> s.id >> s.name)
  {
    s.sum = 0; count=0;
    while (count <NUMCOURSE && ifs >> s.score[count])
    {
      s.sum+=s.score[count];
      count++;
    }
    s.avg = s.sum / NUMCOURSE;
    cout <<"ID:\t"<<s.id <<"\t"<<"Name:\t"<<s.name << "\t"<<"Score1:\t"<<s.score[0]
       <<"  Score2:\t" <<s.score[1]<<"  Sum:\t" << s.sum << "  Average:\t"<<s.avg << endl;
        i++;
    }
    cout << "Total lines: "<<i<< endl;
}