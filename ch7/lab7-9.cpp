
#include <iostream>
#include <iomanip>
using namespace std;

void findMaxSum(int[], int[][5], int, int);
void findMaxElm(int[], int[][5], int, int);
void findMaxVal(int[], int[][5], int, int);
const int SIZE =10;

int main()
{
    const int NUM_ROWS = 6;
    const int NUM_COLS = 5;
    int       result[SIZE]={0};
    int       numbers[NUM_ROWS][NUM_COLS] = {{2,7,9,6,4},
                                             {6,1,8,10,4},
                                             {4,3,7,2,9},
                                             {9,9,0,3,1},
                                             {8,8,7,8,9},
                                             {1,2,1,2,3}};

    findMaxSum (result, numbers, NUM_ROWS, NUM_COLS);
    cout << "The row values are: ";
    for (int i=0; i<NUM_COLS;i++)
    {
        cout << setw(5) << result[i];
    }
    cout << endl;
    findMaxElm (result, numbers, NUM_ROWS, NUM_COLS);
    cout<< "The Max values in the rows are: \n";
    for(int i = 0; i< NUM_ROWS; i++)
       {
         cout << setw(5)<< result[i]<<endl;
       }

    findMaxVal(result, numbers, NUM_ROWS, NUM_COLS);
    cout <<"The row that has the max value ";
    for(int i=0; i<NUM_COLS;i++)
    {
        cout << setw(5) << result[i];
    }
    cout << endl;
}
/* Task;        Find the row that has the greatest row summation. when row is found extract the values and
                store them in the array result[].
Data in;        array result, two- dimensional array numbers, number of cols and rows
data out;       no data out.*/
void findMaxSum (int result[], int numbers[][5], int rows, int cols)
{
    int sum=0;
    int max=numbers[0][0];
    int row, col;
    int maxRow = 0;  // to store the row that has max summation.

    for ( row = 0; row < rows; row++)
    {

        sum=0;
        for (col = 0; col< cols; col++)
        {
            sum+=numbers[row][col];
        }
        // to find which row has the max summation value
        if (max < sum)
        {
            max = sum;
            maxRow=row;
        }
    }
    // find the row number, and store the values in array.
    for (int i=0; i<rows; i++)
    {
        if (i==maxRow)
        {
            for ( int j=0; j<cols; j++)
            {
                result[j]=numbers[maxRow][j];
            }
        }
    }
}
/* task:        To find the greatest element in each row.
                Than store those elements in array result
Data in;        array result, two- dimensional array numbers, number of cols and rows
data out;       no data out.*/
void findMaxElm (int result[], int numbers[][5], int rows, int cols)
{
    // go through each row and cols to find the greatest element in the two- dimensional array numbers
    int row,col;
    int greatest=0;

    for( row = 0; row < rows; row++)
    {
        greatest = numbers[row][0];

        for(col = 0; col< cols; col++)
        {
           if (greatest < numbers[row][col])
           {
              greatest= numbers[row][col];
           }

        }
           result[row]= greatest;
    }
}
/* task:        To find the greatest element in all row.
                Than store those elements in array result
Data in;        array result, two- dimensional array numbers, number of cols and rows
data out;       no data out.*/
void findMaxVal (int result[], int numbers[][5], int rows, int cols)
{
    // go through each row and cols to find the greatest element in the two- dimensional array numbers
    int row,col;
    int maxRow;
    int max = numbers[row][0];

    for( row = 0; row < rows; row++)
    {


        for(col = 0; col< cols; col++)
        {
           if (max < numbers[row][col])
           {
              max= numbers[row][col];
              maxRow = row;
           }

        }
    }
    // find the row number, and store the values in array.
    for (int i=0; i<rows; i++)
    {
        if (i==maxRow)
        {
            for ( int j=0; j<cols; j++)
            {
                result[j]=numbers[maxRow][j];
            }
        }
    }
}
