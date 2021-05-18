#include <iostream>
#include <fstream>
#include <string>

using namespace std;
const int NUMCOURSE=2;
struct Student   {
                    int id;
                    string name;
                    int score[NUMCOURSE];
                    int sum;
                    int avg;
                            };

int makingstructurray(Student []); //return value; the size of struct array
void printout(const Student );
void findusername(Student [], int,string);

int main()
{
  int numofRecords=0;
  Student s[50];
  string username;

  int numofRecords=makingstructurray(s[]);
  cout << "Total number of students records is "<< numfRecords << endl;
  for (int i=0; i<numfRecords;i++)
  {
    printout(s[i]);
  }
  cout << "Enter user name to find in Student's records\n";
  cin >>username;
  findusername(s, numfRecords, username);

}
int makingstructurray (Student s[])
{
  int i;
	ifstream ifs;

	ifs.open("students.txt");
	if ( ifs.fail()) 
	{
		cerr << "File Open Error\n";
		exit(0);
	}
	i = 0;
	while(ifs >> s[i].id >> s[i].name >> s[i].score[0] >> s[i].score[1] )
	{
		s[i].sum = 0;
		for(int idx=0; idx<NUMCOURSE; idx++)
			s[i].sum += s[i].score[idx];
		s[i].avg = s[i].sum / NUMCOURSE;
		i++;
	}
	return i-1;
}
void 	findusername(Student s[], int N, string username)
{
	int found = 0;
	for(int i=0; i<N; i++)
	{
		if (s[i].name.find(username) != string::npos){
				cout << "We found the record for" << username << endl;
				printout(s[i]);	
				found = 1;
		}
	}
	if (!found)
		cout << "We don't have the record for " << username << endl;

}

void 	printout(Student s)
{
		cout << "ID \t\t Name\t Score1\t Score2\t Sum\t Avg\n";
		cout << s.id << "\t";
		cout << s.name << "\t";
		for(int idx = 0; idx < NUMCOURSE; idx++)
			cout << s.score[idx] << "\t\t";
		cout << s.sum << "\t\t";
		cout << s.avg << endl;
}