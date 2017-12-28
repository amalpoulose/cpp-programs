#include<iostream>
#include<typeinfo>
using namespace std;

template<class type>
void sort(type *a,int n)
{
 int i,j;
 type tmp;
 for(i=0;i<n-1;i++)
  for(j=i+1;j<n;j++)
  if(a[i]>a[j])
  {
    tmp=a[i];
    a[i]=a[j];
    a[j]=tmp;
  }  
}

main()
{
 int n=5,i;
// char  a[]={'a','#','A','@','z'};
 float a[]={14.23456,57.6456,3.4567,7.890,1.034};
 sort(a,5);
 for(i=0;i<5;i++)
 cout<<a[i]<<" ";
 cout<<endl;
}   
