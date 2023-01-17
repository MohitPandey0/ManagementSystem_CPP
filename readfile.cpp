#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
int main()
{
    ifstream file1;
    file1.open("Storage.txt",ios::in); // by default it  is in r mode
    string sentence;
    while (getline(file1, sentence))
    {
        cout << sentence<<endl;
    }
    file1.close();
    return 0;
}