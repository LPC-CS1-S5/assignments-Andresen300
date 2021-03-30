//write a program that calculate the even and odd summation of the user inputs
//static variable is going to store the previous summation
#include	<iostream>
using namespace	std;

int	evensumGet(int);
int	oddsumGet(int);

int	main()
{
	int 	evenSum=0,oddSum=0;
	int	input;

	do
	{
		cout << " Enter your input \n";
		cin >> input;
		if ( input == -1)
			break;
		else if ( input % 2)
			oddSum = oddsumGet(input);
		else
			evenSum = evensumGet(input);
	} while (1);
	cout << oddSum << ": The summation of all Odd inputs\n";
	cout << evenSum << ": The summation of all Even inputs\n";
}

int evensumGet (int even)
{
    static int evenSum = 0; //keeps the previous summation. unlike local variable how value is destrode after living the function.
    evenSum += even;
    return evenSum;

}
int oddsumGet (int odd)
{
    static int oddSum = 0;
    oddSum +=odd;
    return oddSum;

}
