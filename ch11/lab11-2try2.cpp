
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  const int NUMCOURSE = 2;
  ifstream ifs;
  string username;

  struct student
  {
    int id;
    string name;
    int score[NUMCOURSE];
    int sum;
    int avg;
  };

  student s[10];
  int i = 0;

  ifs.open("students.txt");


  while(i < 10)
  {
    s[i].sum = 0;
    ifs >> s[i].id;
	cout << " ID : " << s[i].id << endl;
    ifs >> s[i].name;
	cout << " name : " << s[i].name << endl;
    for(int j = 0; j < NUMCOURSE; j++)
    {
      ifs >> s[i].score[j];
		cout << " score : " << s[i].score[j] << endl;
      s[i].sum += s[i].score[j];
    }

	cout << " Sum : " << s[i].sum << endl;
    s[i].avg = s[i].sum / 2;
	cout << " Avg : " << s[i].avg << endl;
    i++;
  }


 cout << "Enter user name to find in Student's records\n";
 cin >>username;


  // Make a code for finding some record that has "given name"

 //while/ for
 // if ( s[i].name == userinput)
    int found = 0;
	for(int i=0; i<10; i++)
	{
		if (s[i].name.find(username) != string::npos)
            {
				cout << "We found the record for " << username << endl;
				found = 1;
		    }
	}
	if (!found)
		{
		    cout << "We don't have the record for " << username << endl;
		    cout << s[i].id<<"\t"<<s[i].name;
		}
   ifs.close();
}