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
bool domaincheck (char email[])
{
  const int DSIZE =5;
  char domain [DSIZE][10] = {"com", "edu", "org", "net", "gov"};
  for (int i= 0; i < DSIZE; i++)
  {
    if(strcpm (domain[i], email+strlen(email)-3)==0)
    return true;
  }
  return false;
}