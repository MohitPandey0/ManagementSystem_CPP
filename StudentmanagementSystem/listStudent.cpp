#include "student.h"

void listStudent()
{
    ifstream ifobj1;
    ifobj1.open("storage.dat",ios::binary);
    student stu;

    if (!ifobj1)
    {
        cout<<"Error unable to open File !!"<<endl;
        exit(0);
    }
    

    cout<<left<<setw(30)<<"Roll No."<<setw(30)<<"Name "<<setw(60)<<"Marks"<<endl;
    while (ifobj1.read(reinterpret_cast<char *>(&stu),sizeof(student)))
    {
        cout<<setw(30)<<stu.rollno<<setw(30)<<stu.name<<"[";
        for (int i = 0; i < 7; i++)
        {
            cout<<stu.sub[i]<<",";
        }
        cout<<"\b]"<<endl;
        
    }
    ifobj1.close();

}