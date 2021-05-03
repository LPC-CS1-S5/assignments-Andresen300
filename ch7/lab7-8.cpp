
//Read all lines from the file "babynames.txt" . Each line consists of 5 fields.
// Read the lines and construct the array.

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

//Function prototype
int makeNameRecord(string[], string[],int[], string[], int[]);
void printOutAllRecords(int, string[],string[], int[],string[],int[]);
void printNameWithA ( int, string[], string[], int[], string[],int[]);
//void pringOutContents (string, string, int, string, int);

const int N=5000;

int main()
{
    string state[N];
    string gender[N];
    int    year[N];
    string name[N];
    int count[N];
    int cnt;

    cnt = makeNameRecord(state, gender, year, name, count);
    printOutAllRecords(cnt, state, gender, year, name, count);
    printNameWithA(cnt, state, gender, year, name, count);
}

//Function definitions
/* Task:      read all lines from the file. Then construct the array from each field               read fro the file.
              Variable cnt -- to hold the number of lines read. and index
Data in:      this function accepts an arrays of ints and strings and size as its                  arguments.
Data out:     it  returned cnt (line read) */
int makeNameRecord ( string state[],string gender[],int year[], string name[],int count[])
{
    ifstream    inputfile;
    string      readline;
    int         cnt=0;

    inputfile.open("babyname.txt");
    if (!inputfile)
    {
        cout << "Error with Opening the file\n";
        exit(0);
    }
    while(cnt < N)
    {
        if(inputfile >>state[cnt]>>gender[cnt]>>year[cnt]>>name[cnt]>>count[cnt])
        {
            cnt++;
        }
        else
        {
            cout <<"Read Stop at line " << cnt << endl;
            break;
        }

    }
      cout << cnt << " - lines read from the file\n";
      return cnt;
}

/* Task:        To print out all records in the array.
 data in:       arrays of ints and strings and cnt for size.
 data out:      not a returning function. Just print. */

 void printOutAllRecords (int cnt, string state[],string gender[],int year[], string name[],int count[])
 {
     for (int i=0; i < cnt; i++)
     {
         cout <<state[i]<<"   "<< gender[i]<<"   "<< year[i]<< "    "<< name[i]<<"          "<< count[i] << endl;
     }
     cout << "Total lines: " << cnt << endl;

 }

 /* task:       to find a surtan record with a given condition.*/

void printNameWithA (int cnt, string state[],string gender[],int year[], string name[],int count[])
{
    int lines=0;
    cout <<"The list of names in CA and starting with \"A\"\n";
    for(int i=0; i < cnt; i++)
    {
        if ((name[i].rfind("A",0) == 0 ) && (state[i] == "CA"))
        {
           cout <<state[i]<<"   "<< gender[i]<<"   "<< year[i]<< "    "<< name[i]<<"          "<< count[i] << endl;
           lines++;
        }
    }
    cout << "Total lines; "<< lines <<endl;
}
