#include <iostream>
#include <fstream>
using namespace std;

void getInput ( int &, int &);
int isSame (int, int);
int intDivision ( int, int);
void fileWrite (int);

int main()
{
  int n1, n2;
  double quotient;
  ofstream ofs;
  
  getInput(n1, n2);
  if (isSame(n1,n2))
  {
    exit (0); 
  }
 
  else
  {
    quotient = intDivision(n1, n2);
  }
  
  fileWrite(quotient);

}

// getInput function that gets user input an stores int in pass by reference variables n1 and n2.
void getInput (int &n1, int &n2)
{
  cout << "Enter the 2 positive numbers starting from 1 and I will preform an integer division: " << endl;
  cin >>n1 >>n2;
}
//pass by value n1, n2. check if they are the isSame
//value returning function. return 1 for the same and 0 for not the same.
int isSame (int n1, int n2)
{
  if (n1 == n2)
  return 1;
  else
  return 0;
}
//pass by value n1, n2
// vlalue returning function. retruns Quotient.
int intDivision ( int n1, int n2)
{
  float quotient;
  if (n1 > n2)
  {
    quotient = n1/n2;
  }
  else
  {
     quotient = n2/n1;
  }
  return quotient;

}
void  fileWrite(int quotient)
{
  ofstream ofs;
  ofs.open ("question5.txt");
    if(!ofs)
    {
        cout << "Open write error\n";
        exit(0); 
    }
    else
    ofs << quotient<< endl;
}
