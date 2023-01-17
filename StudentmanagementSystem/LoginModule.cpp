#include "student.h"

// void removeNewLine(char arr[])
// {
//     int i;

//     for(i=0;arr[i]!='\n';i++);

//     arr[i]='\0';
// }
class user
{
public:
    char uname[30];
    char pass[9];
};
bool isValid(char username[], char password[])
{
    user temp;
    ifstream ifobj;
    ifobj.open("admin.dat", ios::binary);

    if (!ifobj)
    {
        cout << "error unable to open file !" << endl;
        exit(0);
    }

    while (ifobj.read(reinterpret_cast<char *>(&temp), sizeof(user)))
    {
        if (!strcmp(temp.uname, username) && !strcmp(temp.pass, password))
        {
            cout << endl
                 << "Login succesfully!" << endl;
            ifobj.close();
            return true;
        }
    }
    cout << endl
         << "invalid username or password !" << endl;
    ifobj.close();
    return false;
}
void saveuser()
{
    ofstream ofs;
    ofs.open("admin.dat", ios::binary | ios::app);
    user u1;
    cout << "Enter Username :";
    // fgets(u1.uname,50,stdin);
    // removeNewLine(u1.uname);
    cin.getline(u1.uname, 50);
    cout << "Enter Password :";
    for (int i = 0; i < 9; i++)
    {
        u1.pass[i] = getch();
        cout << "*";
    }
    u1.pass[9] = '\0';
    ofs.write(reinterpret_cast<char *>(&u1), sizeof(user));
    cout << endl;
    ofs.close();
}

//uncomment to add new user
// int main()
// {
//     saveuser();
//      //check is user's data stored
//     char name[] = "Aman", pass[] = "Aman@1234";
//     isValid(name, pass);
//     return 0;
// }