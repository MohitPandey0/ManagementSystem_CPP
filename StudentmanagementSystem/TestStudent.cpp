#include "student.h"
#include<cstring>
int main()
{
    ofstream of;
    of.open("storage.dat",ios::app | ios::binary);

    student st;
    st.rollno=21;
    strcpy(st.name,"Aman Tiwari");
    st.sub[0]=100;
    st.sub[1]=50;
    st.sub[2]=1890;

    of.write(reinterpret_cast<char*>(&st),sizeof(student));
    of.close();

    ifstream is;
    is.open("storage.dat");

    student stu;
    is.read(reinterpret_cast<char*>(&stu),sizeof(student));

    cout<<"The details of student is :"<<endl;
    cout<<stu.rollno<<endl;
    cout<<stu.name<<endl;
    cout<<stu.sub[0]<<endl;
    cout<<stu.sub[1]<<endl;
    cout<<stu.sub[2]<<endl;
    is.close();
    return 0;
}