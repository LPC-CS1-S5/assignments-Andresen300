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
          cout << prime<< " ";
        }
      }
}