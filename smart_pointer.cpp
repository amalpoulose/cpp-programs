#include<iostream>

using namespace std;

class num
{
	int x;
	public:
	num(){ }
	num(int x){ this->x=x;}
	void display()
	{
		cout<<"x - "<<x<<endl;
	}
};

class smartpointer
{
	num *smptr;
	public:
	smartpointer(num *temp)
	{
		smptr= temp;
	}
	num * operator->()
	{
		return smptr;
	}
	~smartpointer()
	{
		delete smptr;
	}
};

main()
{
 smartpointer spi(new num(12));
 spi->display();
}
