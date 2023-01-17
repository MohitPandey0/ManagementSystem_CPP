#include<iostream>
using namespace std;

class A
{
	int x;
		public:
			
	A()
	{
		x=10;
	}
	friend class B; //friend class
};
class B
{
	public:
		void set()
		{
            A a1;
            // a1.x=20;
			cout<<endl<<"The value of x="<<a1.x<<endl;
		}
};

main()
{
	B b;
    b.set();
	return 0;
}
