
#include "student.h"
void SearchStu()
{
    int rollno,found=0;
    ifstream ifobj;
    student temp;
    ifobj.open("storage.dat",ios::binary);
    cout<<"enter roll no. "<<endl;
    cin>>rollno;
    while (ifobj.read(reinterpret_cast<char*>(&temp),sizeof(student)))
    {
        if (temp.rollno==rollno)
        {
            temp.showDetails();
            ifobj.close();
            found=1;
            break;
        }
    }
    if (!found)
    {
        cout<<"Student Record Doesn't exist !!"<<endl;
        ifobj.close();
    }
}