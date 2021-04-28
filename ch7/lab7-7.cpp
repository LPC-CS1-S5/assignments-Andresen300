#include <iostream>

using namespace std;

int finduserstring(char [], int, char[],int);


int main()
{
    int cstrlen, userlen, position;
    char cstr[10] = "Chocolate";
    char userstr[100];

    cstrlen = strlen(cstr);
    cin>> userstr;
    userlen = strlen(userstr);

    position = finduserstring(cstr, cstrlen, userstr, userlen);
    if (position != -1);
    {
        cout << "Found your string at : " << position<< endl;
    }
    else
        cout << "Not found\n";
}

int finduserstring(char cstr[], int size, char userstr[],int sizeagain )
{
    for (int index = 0; index < strlen(cstr)-strlen(usertr))

}