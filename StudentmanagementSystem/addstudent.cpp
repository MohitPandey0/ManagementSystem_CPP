#include "student.h"
#include "isExist.cpp"
void addStudent()
{
    char ch;
    ofstream of;
    of.open("storage.dat", ios::app | ios::binary);

    do
    {
        student tempstu;
        bool status;
        do
        {
            cout << "Enter roll no. " << endl;
            cin>>tempstu.rollno;
            status = isExist(tempstu.rollno);
            if (status == true)
            {
                cout << " pls enter the unique rollno. !!" << endl;
            }

        } while (status);
        cin.ignore();
        cout << "Enter Name " << endl;
        cin.getline(tempstu.name,50);

        for (int i = 0; i < 7; i++)
        {
            cout << "Enter " << i << "th subject marks :" << endl;
            cin>>tempstu.sub[i];
        }

        of.write(reinterpret_cast<char *>(&tempstu), sizeof(student));
        cout<<endl<<"Student Record stored in File !!"<<endl;
        cout << "press enter to input again !!" << endl;
        ch=getch();
    } while (ch == '\n');

    of.close();
}