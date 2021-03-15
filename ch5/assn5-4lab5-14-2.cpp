/* Let us assume that this file has all integer values.
In this program, we will get the total number of integers we read, and the summation of all integers, the minimal and maximum value, and the average value.
Program Requirements
Open the file that was created in the Lab 5-14-1
Make the loop structure for reading all values of a file
make the decision structure to find the min and max value.
calculate the summation
Calculate the average*/
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  int num, min, max, sum, count;
  double average;
  ifstream infile;
  infile.open("Nrandom.txt");

  while (infile >> num)
  {
    cout << num << endl;
  }
  infile.close();
}