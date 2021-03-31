#include <iostream>
#include <ctime>

using namespace std;
void  getRdnum();
void  getRdnum(int);
void  getRdnum( int, int);

int main ()
{
  int n1, n2, rnum;

  cout <<"I will return a random number from 1-100:"<< endl;
  getRdnum();
  cout <<"I will return random numbers from 1-n2:"<< endl;
  cout <<"Enter the number for n2:\n";
  cin >> n2;
  getRdnum(n2);
  cout << "I will return random numbers in you range n1-n2:" << endl;
  cout <<"Enter two numbers:\n";
  cin >> n1 >> n2;
  getRdnum(n1,n2);

}
void getRdnum()
{
  int rnum;
  rnum = rand() % 100;
  cout << rnum<< endl;
}

void getRdnum (int n2)
{
  int rnum;
  for ( int i= 0; i < n2; i++)
  {
    rnum = rand ()% n2;
    cout << rnum << "  ";
  }
  cout << endl;
}

 void getRdnum (int n1, int n2)
 {
	 // 20 - 30
	 // possible random numbers : 10
	 // rand() % 10 : 0, 1, ,2 .. 9
	 //  + 20 : 20, 21, 22, .. 29
   int rnum;
   int numcount;
   numcount = n2-n1;
   for ( int i= 0; i < numcount; i++)
   {
       rnum =(rand ()% numcount) + n1;
       cout << rnum << "  ";
   }
   cout << endl;
 }
