#include	<iostream>
#include	<cstdlib>
#include	<ctime>
#include	<vector>
#include	<algorithm>
#include	<iterator>
using namespace std;

void makevector(vector<int> &, int);
void printvector(vector<int>);
void deleteone(vector<int> &);

int main()
{
	vector<int> number;
	int 	size = 20;
	srand(time(0));
	makevector(number, size);
	printvector(number);
	deleteone(number);
}
//to fill vector with random numbers 1-10
// data in;   accepts an int vector as its argument that is pass by reference
void makevector(vector<int> &vec, int size)
{
	for(int i=0; i<size; i++)
    	    vec.push_back(rand() % 10); // vec.push_back (the vector elements do not exist yet. we                               //i cannot use the [].
}
// print element in a vector. accepts vector of ints as an arqument
void printvector(vector<int> vec)
{
	for(int v : vec) //based loop. we don't need to know the size
    	     cout << v << "\t";
	cout << endl;
}
/*In your function “deleteone( )”, find the value to be deleted and then use the member function “erase( )” with the found index as a parameter.*/ 

