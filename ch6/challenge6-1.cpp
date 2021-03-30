// user enter 3 numbers and writhe the lagers to the file.
#include <iostream>
#include <fstream>
using namespace std;

void getinput (int &, int &, int &);
int greatestnum (int , int, int);
void writefile (ofstream &, int);


int main ()
{
    int num1, num2, num3;
    int gtnum;
    ofstream ofs;

    getinput (num1, num2, num3);
    gtnum = greatestnum(num1, num2, num3);

    ofs.open("challenge1.txt");
    if(ofs.fail())
    {
        cerr <<"File Open Error\n";
        exit(0);
    }
    writefile(ofs, gtnum);

}
 void getinput( int &n1, int &n2, int &n3 )
 {
     cout << "Enter 3 numbers: "<<endl;
     cin >> n1 >> n2 >> n3;
 }
int greatestnum(int n1, int n2, int n3)
{
    int max;
    max = n1;
    if (max < n2)
        max = n2;
    if (max < n3)
        max = n3;
    return max;

}
void writefile (ofstream &ofs, int gtnum)
{
    ofs<< gtnum << endl;
    if (ofs.fail())
    {
        cerr << "File Open Error\n";
        exit(0);
    }
}
