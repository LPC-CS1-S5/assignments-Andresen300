//Make the program that writes the number into the file "numbers.txt"
#include <iostream>
#include <fstream>
#include <ctime>

int getRdnum(void);
int isGreater ( int n);

using namespace std;

int main()
{
  int n=10;
	int rdnum;
  ofstream ofs;
  srand(time(0));

  ofs.open ("number.txt");
  if(!ofs)
  {
    cout << "Open Write Error\n";
    exit(0);
  }
  for (int i=0; i<10; i++)
  {
    rdnum = getRdnum();
	cout << "random number : " << rdnum << endl;
    if (isGreater(rdnum))
    {
      ofs << rdnum << endl;
    }
  }


}
//Function definition getRdnum
// This function does not have andy parameter. it generante random number for 1-50
// the generated numbers will be returned
int getRdnum (void)
{
	int rdnum;
  rdnum = rand ()%50;
  return (rdnum);
}
//isGreater
//This function check that the number n (that is passed as a parmeter) is a greater
// than the preceding number or not 
//if so, it will return 1, if not return 0
int isGreater ( int n)
{
	// (n < precedingnumber) 
  static int precedinnum = 51;
  if (precedinnum < n){
	precedinnum = n;
	return 1;
  }
  else{
	precedinnum = n;
	return 0;
  }
}