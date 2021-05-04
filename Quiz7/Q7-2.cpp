#include <iostream>
using namespace std;

void printtriangle(int numbers[][3], int);

int main()
{
  const int SIZE =3;
  int numbers[SIZE][SIZE] = {{0,1,2},{3,4,5},{6,7,8}};

  printtriangle(numbers, SIZE);
}

void printtriangle( int num[][3], int size)
{
  int r, c;
  for( r = 0; r < size; r++)
  {
      if (r==0)
      {
        for(c =0; c < 1; c++ )
        cout << num[r][c] << endl;
      }
      else if ( r == 1)
      {
        for(c = 0; c < 2; c++)
        {
          cout << num[r][c] << " ";
        }
        cout << endl;
      }
      else if (r == 2)
      {
        for(c =0; c < 3; c++ )
        {
          cout << num[r][c] << " ";
        }
      }
        
  }
}
