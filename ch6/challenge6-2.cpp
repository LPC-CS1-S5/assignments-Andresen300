#include <iostream>
#include <fstream>
using namespace std;

void getinput (int &, int &);
int isSame (int, int);
int isGreater(int,int);
void writefile(ofstream &, int);

int main()
{
    int num1, num2;
    int div;
    ofstream ofs;

    ofs.open ("challenge2.txt");
    if ( ofs.fail())
    {
        cerr << "File Open Error\n";
        exit(0);
    }


    while (1)
    {

        getinput(num1, num2);
        if (isSame(num1, num2))
            break;
        div= isGreater (num1, num2);
        writefile (ofs, div);
    }

    ofs.close();


}

 void getinput(int &num1, int &num2)
 {
     cout << "Enter the first numbers\n";
     cin >> num1;
     cout << "Enter the second number\n";
     cin >> num2;
 }
 int isGreater (int n1, int n2)
 {
     int ln1, ln2;

     ln1 = n1% 10;
     ln2 = n2 % 10;

     if (ln1 > ln2)
        return n1;
     else
        return n2;
 }
  int isSame (int n1, int n2)
  {
      if (n1 ==n2)
        return 1;
      else
        return 0;
  }

void writefile (ofstream &ofs, int div)
{
    ofs << div << endl;
    return;
}
