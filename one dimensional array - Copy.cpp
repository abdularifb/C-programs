#include<iostream>
using namespace std;

int main()
{
  int n[5];
  
  int i;
  
  int sum=0;
  
  cout<<"Enter the value one by one:";
  
 
  for(i=0;i<5;i++)
      cin>> n[i];
  
  for(i=0;i<5;i++)
       sum=sum+n[i];
  
  cout<<"Total:"<<sum;	    
  
  
}

