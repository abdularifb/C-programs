#include<iostream>
using namespace std;

void swap(int&,int&);

int main()
{
  int a=10,b=15;
  
  cout<<"\nvalue of before swap:"<< "A = " <<a <<" B = " <<b;
  
  swap(a,b);
  
  cout<<"\nvalue after swap:"<< " A = "<<a << " B = " <<b;
  
 
}


void swap (int&x,int&y)
{
  int t=x;
  
  x=y;
  
  y=t;
  

  
}



