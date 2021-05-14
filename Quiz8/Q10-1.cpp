#include <iostream>
#include <cctype>
#include <cstring>
#include <fstream>

using namespace std;

int main()
{
ifstream ifs;
char search = 't';
int counter = 0;
string paragraph ="The Python 2 language was officially discontinued in 2020 (first planned for 2015), and Python 2.7.18 is the last Python 2.7 release and therefore the last Python 2 release. No more security patches or other improvements will be released for it. With Python 2's end-of-life, only Python 3.5.x and later are supported. thither";
 getline(cin, paragraph);
 for (int i=0; i<paragraph.length(); i++)
 {
   if(paragraph[i] == search)
   counter+=1;
 }
   cout << "The th appears " << counter << " times ";
}

// int countsubstring(string keystring) {
//         int found, start, count = 0;
//         ifstream ifs;
//         string readstring;
//         ifs.open("python.txt");
//         if (!ifs) {
//                 cout << "File Open Error\n";
//                 exit(0);
//         }
//         while (ifs >> readstring) {
//                 start = 0;
//                 while (((found = readstring.find(keystring, start)) != string::npos)) {
//                         count += 1;
//                         cout << "found in " << readstring << " "
//                              << "at " << found << endl;
//                         start = found + 1;
//                 }
//         }
//         return count;
// }