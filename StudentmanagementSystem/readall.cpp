#include<iostream>
#include<fstream>
using namespace std;
class user
{
    public:
    string uname;
    string pass;

    void showdata()
    {
        cout<<uname;
        cout<<pass;
    }
};
int main()
{
    ifstream if1;
    if1.open("admin.dat",ios::in);
    user u1;

    while (if1.read(reinterpret_cast<char*>(&u1),sizeof(user)))
    {
        // cout<<" uname "<<u1.uname<<" pass "<<u1.pass<<endl;
        u1.showdata();
    }
    

    if1.close();

    return 0;
}
