#include "student.h"

bool sortStudents()
{
    ifstream ifobj1;
    ifobj1.open("storage.dat", ios::binary);
    student stu, stuArr[100], temp;
    int size = 0, choice;
    cout << "1.Sort with Roll No. " << endl;
    cout << "2.Sort with Name " << endl;
    cin >> choice;
    if (choice == 1 || choice == 2)
    {
        cout << "Sorting..." << endl;
    }
    else
    {
        cout << "pls type valid choice !" << endl;
        return false;
    }
    if (!ifobj1)
    {
        cout << "Error unable to open File !!" << endl;
        exit(0);
    }
    while (ifobj1.read(reinterpret_cast<char *>(&stu), sizeof(student)))
    {
        stuArr[size++] = stu;
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (stuArr[j].rollno > stuArr[j + 1].rollno && choice == 1)
            {
                temp = stuArr[j];
                stuArr[j] = stuArr[j + 1];
                stuArr[j + 1] = temp;
            }
            if (strcmp(stuArr[j].name, stuArr[j + 1].name) == 1 && choice == 2)
            {
                temp = stuArr[j];
                stuArr[j] = stuArr[j + 1];
                stuArr[j + 1] = temp;
            }
        }
    }
    cout << left << setw(30) << "Roll No." << setw(30) << "Name " << setw(60) << "Marks" << endl;
    for (int k = 0; k < size; k++)
    {
        cout << setw(30) << stuArr[k].rollno << setw(30) << stuArr[k].name << "[";
        for (int i = 0; i < 7; i++)
        {
            cout << stuArr[k].sub[i] << ",";
        }
        cout << "\b]" << endl;
    }

    return true;
}