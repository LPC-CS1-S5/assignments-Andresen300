#include <iostream>


using namespace std;

int main()
{
    const int SIZE1=5;
    const int SIZE2=10;
    
    int numbers1[]={2,3,5,9,10};
    int numbers2[]={1,2,3,5,9,10,11,13,15,1};
    
  // look for element of frist array in the second array. travel through element one by one. 
  bool found = false;
    for ( int i =0; i<SIZE1; i++)
    {
      found = false;
        for(int j =0; j<SIZE2; j++)
        {
            if (numbers1[j]== numbers2[j])
            {
              cout<< numbers1;
            }
          
        }
    }
}