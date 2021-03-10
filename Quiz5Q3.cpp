#include <iostream>
using namespace std;

int main()
{
  int N; // to hold the base
  int M; // the highest pow to rase base 

  cout << "Enter the base and the exponent 0 < N < 10,  1 <= M <= 10" << endl;
  cin >> N >> M;

  while (N <= 0 && N >= 10 && M <1 && M >10)
  cout<< "Enter base and exponent again. 0 < N < 10,  1 <= M <= 10 " << endl;
  cin >> N >> M;
  
  for (int i=0; i < M; i++)
  {
    N=N*i;
    cout << N << " ";
  }

}