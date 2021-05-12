
// Condition for the email string.
// start with the alphabet.
// ID characters are all alpha numerics characters
// the last string shoud be one of the list {com, edu, org, and net}

#include		<iostream>
#include		<cctype>
#include		<cstring>
using namespace std;

bool 	idcheck(char []);
bool 	domaincheck(char []);

int 	main()
{
		char 	email[20];

		cout 	<< "Enter your email \n";
		cin 	>> email;

		if(idcheck(email))
			cout << "ID check passed\n";
		if( domaincheck(email))
			cout << "Domain check passed\n";
}
bool 	idcheck(char email[])
{
	int i =0;
	if (!isalpha(email[0])) //the first chracter must be a alphabet. it it is not true we will return false
    return false;           

    while (email[i]!= '@')  // checking the values in email ID
    {
        if (!isalnum(email[i])) // All values in ID must be the alpha numeric.
            return false;
        i+=1;
        if (i>10) // after the while loop has the length of ID. The length must be less than 10
            return false;
        return true;
    }
}
bool	domaincheck(char email[])
{
	const int DSIZE=4;
	char domain[DSIZE][10] = {"com","edu", "org","net"}; //array of a char string. 
	for (int i=0; i<DSIZE;i++)
        if (strcpm(domain[i], email+strlen(email)-3)==0) // compare each domain name to the last 3 characters of the email string. 
                                                        // if any of the values are matching we will return true.
            return true;
    return false;
}