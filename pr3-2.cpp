#include <iostream>

using namespace std;

int main()
{
  float males, females, total_students; 
  float percent_females, percent_males;

  cout << "How many females are in the class?\n";
  cin >> females;
  cout << "How many males are in the class?\n";
  cin >> males;

  total_students = females + males;
  percent_females = (females/total_students)*100;
  percent_males = (males/total_students)*100;

  cout << "There are " << percent_males << "% males and " << percent_females << "% females.";

}