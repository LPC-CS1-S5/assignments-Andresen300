/*Make a program that writes the given number N of integers to a file.
The integers that we write to a file will be determined with random number generation.
The number of integers N is determined by the user input.
The generated N random number are stored into a file.
Program Requirements
User input for the number of integers.
generate the N random numbers.
Create and Open the text file.
Write N random numbers into a file.*/
#include <iostream>
#include <fstream>
#include <iomanip>
#include <ctime>
using namespace std;

int main ()
{
  int N, num;
  ofstream outfile;
  srand(time(0));

  cout << "How many numbers do you want to record?\n";
  cin >> N;
 
  outfile.open ("Nrandom.txt");
  for ( int count=0; count<N; count++)
  {
      num = random() %100;
      cout << num << endl;
      outfile << num << endl;
  }
      outfile.close();

}