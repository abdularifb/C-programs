#include<iostream>
using namespace std;


void line(int x=50);

void line(double);

int main()
{
 
 line();
 line(10);
 line(12.0);

}

  


void line(int n)
{
  int i;
  
  cout<<"\ninteger prametre function:";
  
  for(i=1;i<=n;i++)
      cout<<"_";
  
}

void line(double n)
{
  int x=n;
  
  cout<<"\ndouble pramtre function:";
  
  line(x);
  
}

