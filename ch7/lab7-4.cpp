#include <iostream>

using namespace std;

const int COL=3;
const int ROW=3;

//Function prototype
int getdiagonalsum1( const int [][COL], int);
int getdiagonalsum2 ( const int [][COL],int );

int main()
{

    int number[ROW][COL]= {{10,20,10},
                            {80,90,100},
                            {100,200,300}};

     int sum1, sum2, dif;

     sum1= getdiagonalsum1(number,COL);
     sum2=getdiagonalsum2(number, COL);
     dif=sum1-sum2;
     cout << "sum1="<<sum1<< "   "<< "sum2="<< sum2<<endl;

     cout <<"Difference is " << dif<< endl;

}

// function returns a sum1
// it accepts two dimensional arrays with col for columns. second argument is rows.
int getdiagonalsum1(const int number[][COL], int rows)
{
    int sum=0;
    int col;
    int row, num=0;
    for ( col=0; col<COL; col++)
    {    num=0;
        for ( row=0; row<ROW; row++)
        {
        if (col == num)
            {
                sum+=number[col][row];
            }

            num+=1;
        }
    }
     return sum;
}
int getdiagonalsum2(const int number[][COL], int rows)
{
    int sum=0;
    int col;
    int row, num=2;
    for ( col=0; col<COL; col++)
    {
        for ( row=0; row<ROW; row++)
        {
        if (row == num)
            {
                sum+=number[col][row];
            }
        }
        num-=1;
    }
     return sum;
}
