#include "student.h"

bool isExist(int rollno)
{
     student temp;
    ifstream ifobj;
    ifobj.open("storage.dat",ios::binary);

    if (!ifobj)
    {
        cout<<"error unable to open file !"<<endl;
        exit(0);
    }
    
    while (ifobj.read(reinterpret_cast<char *>(&temp),sizeof(student)))
    {  
        if (temp.rollno==rollno)
        {
            cout<<endl<<"Record Exist!"<<endl;
            ifobj.close();
            return true;
        }
    }
    cout<<endl<<"record doesn't exist !"<<endl;
    ifobj.close();
    return false;
}