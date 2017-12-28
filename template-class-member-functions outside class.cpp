#include<iostream>
using namespace std;

template<class type>
class test
{
type a;
public:
  void setdata();
  void printdata();
  test operator+(test  &);
}; 
 template<class type>
  void test<type> ::setdata()
 {
  cout<<"No : ";
  cin>>a;
 }
 
 template<class type>
 void test<type>::printdata()
 {
  cout<<"No : "<<a<<endl;
 }
 template<class type>
 test<type> test<type>::operator+(test<type>  &o)//overloading + operator
 {
   test temp;
   temp.a=this->a+o.a;
   return temp;
 }

main()
{
 test<char>o,o1,o2;
 o.setdata();
 o1.setdata();
 o2=o+o1;
 o.printdata();
 o1.printdata();
 o2.printdata();
}
 
