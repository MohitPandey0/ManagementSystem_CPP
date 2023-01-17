#include<iostream>
using namespace std;
class Employee
{
    private:
    float salary;
    protected:
    string mobile;
    public:
    int id;
    string name;
    Employee()
    {
        cout<<"Default Value Initialized by Employee"<<endl;
        salary=0.0;
        mobile="Nil";
        id=0;
        name="Nil";
    }
    void setSlary(float slry)
    {
        salary=slry;
    }
    float getSalary()
    {
        return salary;
    }
    void showDetails()
    {
        cout<<"the details of employee is : "<<endl;
        cout<<" ID : "<<id<<endl;
        cout<<" Name : "<<name<<endl;
        cout<<" Mobile : "<<mobile<<endl;
        cout<<" salary : "<<salary<<endl;
    }
};
class PermanentEmployee : public Employee
{
    public:
    // PermanentEmployee()
    // {
    //     mobile="6732466886432";
    //     cout<<"Default Value Initialized by Child "<<endl;
    // }
    // PermanentEmployee(string phone)
    // {
    //     // this->mobile=mobile;
    //     mobile=phone;
    // }

    void updatePhone()
    {
        mobile="6732466886432";
    }
};

int main()
{
    // Employee e1;
    PermanentEmployee e1;
    // PermanentEmployee e1("9891062743");
    cout<<"enter data : ";
    // cin>>e1.salary;//private
    // cin>>e1.mobile;//protected
    cin>>e1.id;
    cin>>e1.name;
    e1.updatePhone();
    e1.setSlary(50000);
    e1.showDetails();
    return 0;
}
