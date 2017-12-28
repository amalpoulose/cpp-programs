#include<iostream>
using namespace std;

template<class type>
class stack
{
type a[5];   
int count;
public:
stack()
{
 count=-1;
}
void push(type data);
void pop();
};
template<class type>
void stack<type>::push(type data)
{
 count++;
 if(count>=5)
 {
   cout<<"stack full"<<endl;
   count--;
    return;
 }
 a[count]=data;
 cout<<a[count]<<" pushed into stack"<<endl;
}

template<class type>
void stack<type>::pop()
{
 if(count==-1)
 {
   cout<<"stack empty"<<endl;
   return;
 }
   cout<<a[count]<<" popped out from stack"<<endl;
   count--;
 }

main()
{
stack <int>o;
int data;
int ch;
char choice;
do
{
 cout<<"1.push\n2.pop\n\nchoice ? : ";
 cin>>ch;
 switch(ch)
 {
  case 1:do
         {
         cout<<"Data : ";
         cin>>data;
         o.push(data);
         cout<<"continue ?(y/n) : ";
         cin>>choice;
         }while(choice=='y'||choice=='Y');
         break;
  case 2 :do
          {
          o.pop();
          cout<<"continue ?(y/n) : ";
          cin>>choice;
          }while(choice=='y'||choice=='Y');
          break;
  default:
         cout<<"invalid choice"<<endl;
}
}while(1);
}
