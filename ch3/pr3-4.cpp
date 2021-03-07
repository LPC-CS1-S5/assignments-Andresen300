#include <iostream>
#include <string>
using namespace std;

int main()
{
  string month1, month2, month3;
  float rain_amount1,rain_amount2,rain_amount3;

  cout<< "Enter the first month and rain amount:\n";
  cin >> month1>> rain_amount1;
  cout<<"Enter the second month and rain amount:\n";
  cin >> month2 >> rain_amount2;
  cout<<"Enter the third month and rain amount:\n";
  cin >> month3 >> rain_amount3;

  double average = (rain_amount1 + rain_amount2 + rain_amount3) /3;

  cout << "The average rain fall for "<<month1<< " "<<month2<< " "<< month3<< " is "<< average;
  

}