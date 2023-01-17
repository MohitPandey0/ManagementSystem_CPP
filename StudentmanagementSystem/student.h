#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <fstream>
#include <conio.h>
#include <cstring>
#include <iomanip>
using namespace std;
class student
{
public:
    int rollno;
    char name[50];
    int sub[10];
    student(){}
    void showDetails()
    {
        cout<<"Roll No. :"<<rollno<<endl;
        cout<<"Name :"<<name<<endl;
        cout<<"Marks :[";
        for (int i = 0; i < 7; i++)
        {
            cout<<sub[i]<<",";
        }
        cout<<"\b]"<<endl;
    }
};
#endif