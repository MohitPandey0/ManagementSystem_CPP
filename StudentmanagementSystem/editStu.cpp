#include "student.h"
void editStu()
{
    fstream ifobj;
    ifobj.open("storage.dat",ios::binary|ios::out|ios::in);
    int rollno,found=0;
    cout<<"enter student roll no.";
    cin>>rollno;
    student temp,newstu;
    while (ifobj.read(reinterpret_cast<char*>(&temp),sizeof(student)))
    {
        if (temp.rollno==rollno)
        {
            cout<<"Student Exist "<<endl;
            cout<<"rollno :"<<temp.rollno<<endl;
            cout<<"Name :"<<temp.name<<endl;
            cout<<"marks : [";
            for (int i = 0; i < 7; i++)
            {
                cout<<temp.sub[i]<<",";
            }
            cout<<"\b]"<<endl;
            found=1;
            newstu.rollno=rollno;
            cin.ignore();
            cout<<"Enter new student details :"<<endl;
            cout<<"Name -> ";
            cin.getline(newstu.name,50);
            cout<<"Marks -> ";
            cin>>newstu.sub[0];

            ifobj.seekp(-1*sizeof(student),ios::cur);
            ifobj.write(reinterpret_cast<char *>(&newstu),sizeof(student));
            cout<<"student record edited successfully !!"<<endl;
            ifobj.close();
            break;
        }       
    }
    if (!found)
    {
        cout<<"Student Record Doesn't exist !!"<<endl;
        ifobj.close();
    }

}