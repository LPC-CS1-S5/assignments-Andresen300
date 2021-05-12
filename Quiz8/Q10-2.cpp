#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

bool idcheck(char[]);
bool domaincheck (char[]);

int main()
{
  char email[20];
  cout << "Enter your email\n";
  cin >> email;

  if (idcheck(email))
  cout << "ID check passed\n";
  if (domaincheck(email))
  cout << "Domain check passed\n";
}

bool idcheck ( char email[])
{
  int i =0;
  int length=0;
  if (!isalpha(email[0]))
    return false;

  length = strlen(email);
  
  if (!(length >5 && length <15)
    return false;
  return true;
  
}