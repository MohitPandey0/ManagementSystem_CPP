#include<iostream>
using namespace std;

int main()
{
    int *ptr;
    ptr=new int(65);

    char *cptr;
    cptr=reinterpret_cast<char*>(ptr);

    cout<<endl<<*cptr<<endl;


    return 0;
}
