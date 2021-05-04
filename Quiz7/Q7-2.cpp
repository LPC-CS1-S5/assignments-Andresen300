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
  int r=0, c=0;
  cout << " r " << r<< " c " << c<< endl;

  for( r = 0; r < SIZE; r++)
  {
      if (r==0)
      {
        for(c =0; c < 1; c++ )
        cout << num[r][c] << endl;
      }
      else if ( r == 1)
      {
        fro(c = 0; c < 2; c++)
        {
          cout << num[r][c];
        }
      }
        
  }
}
