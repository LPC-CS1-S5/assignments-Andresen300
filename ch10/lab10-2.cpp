
#include <cctype>
#include <cstring>
#include <fstream>
#include <iostream>
using namespace std;

void tolowerstring(char[]);
bool exactmatch(char[], char[]);
bool partialmatch(char[], char[]);

int main() {
        ifstream ifso;
        char name[20];
        char readline[20], userinput[20];

        cout << "Enter your input\n";
        cin >> userinput;

        tolowerstring(userinput);
        ifso.open("ny2018.txt", fstream::in);
        if (ifso)
        {
                while (ifso >> readline)
                    {
                        tolowerstring(readline);
                        if (exactmatch(readline, userinput))
                                cout << "Exact match found " << readline << endl;
                        else if (partialmatch(readline, userinput))
                                cout << "Partial match found " << readline << " includes " << userinput << endl;
                    }
        }
}
void tolowerstring(char str[])
{
    for(int i=0; i <strlen(str); i++)
    {tolower(str[i]);
         cout << str[i];
    }
}
bool exactmatch(char readline[], char userinput[])
{
   if (strcmp(readline,userinput)==0)
}
bool partialmatch(char readline[], char userinput[])
{
  char *strPtr = nullptr;
  for ( int i=0; i<strlen(readline); i++)
  {
      strPtr = strstr(readline[i],userinput[i]);
      if (strPtr !=nullptr)
        break;
  }
  if (strPtr != nullptr)
    cout << readline[i] << endl;
  else
    cout << "No matching name was found.\n";
}


