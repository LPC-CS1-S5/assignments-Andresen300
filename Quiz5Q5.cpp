#include <iostream>
using namespace std;

int main()
{
  int prime, start, finish;
  cout << "Enter tow numbers and i will tell you all the prime numbers\n";
  cin >> start >> finish;

  while (start < 1 || start > 100 && finish <=2 || finish >=100 && start > finish)
  {
    cout << " error \n";
    cout << "Enter tow numbers and i will tell you all the prime numbers\n";
    cin >> start >> finish;
  }
    if (start == 1)
    cout << "2"<< " ";
      for (prime = 3; prime < finish; prime++)
      {
        if ( prime % 2 !=0)
        { 
          if (prime % 3 !=0)
          
            if (prime % 5 !=0)

              if (prime % 7 !=0)
                cout << prime << " ";
        }
      }

	//   To check 10 is prime,
	// we need a loop from 2 ~ 9
	// to check modulus 10, e.g, 10 % 2, 10 % 3, ... 10 % 9
	// num = 10;
	// for( i=2; i<num; i++)
	//.    if( num % i == 0)
	//          do something

i don't understand 