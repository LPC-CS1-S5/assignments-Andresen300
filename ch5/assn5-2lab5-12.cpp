
/*Make a program that calculates the scores of students. It asks the user for the number of students and the number of scores per student.
Program Requirements
User input for the number of students and scores.
Input the students name and N scores.
Calculate the average score for each students
Print out the student name, the sum of scores, and the average.*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int score, numStudents, numScores,sum=0;
    double total, average;
    string nameStudent;

    cout << "Enter the number of students\n";
    cin >> numStudents;
    cout << "Enter the number of scores\n";
    cin >> numScores;


    for (int s=1; s <= numStudents; s++)
    {
        cout << "Enter student name ";
        cin >> nameStudent;
        total=0;

        for ( int t=1; t<=numScores; t++)
        {

            cout << "Enter score " << t << " for "<< "student "<< nameStudent <<": ";
            cin >> score;
            total+=score;
        }
        average = total/numScores;
        cout << "The average score for student "<< nameStudent<< " is "<< average<< endl<< endl;
    }
}

