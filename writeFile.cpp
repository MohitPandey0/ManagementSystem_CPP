#include <iostream>
#include <fstream>
#include <string.h>
#include<iomanip>
using namespace std;
int main()
{
    ofstream file1;
    // file1.open("Storage.txt",ios::out); // by default it  is in w mode
    file1.open("Storage.bin",ios::binary | ios::app); // by default it  is in w mode
    string sentence;
    while (file1)
    {
        cout << "enter a sentence : ";
        getline(cin, sentence);
        if (sentence == "-1")
            break;
        file1 << setw(20)<<sentence << endl;
    }
    file1.close();
    return 0;
}