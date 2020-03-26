#include<iostream>
using namespace std;
int main()
{
  int a;
  char b;
  float c;
  char name[50];
  
  cout<<" Enter the intiger number:";
  cin>>a;
  
  cout<<"Enter the floating number:";
  cin>>c;
  
  cout<<"Enter the character :";
  cin.ignore();
  cin.get(b);
  
  cout<<"Enter your name:";
  cin.ignore();
  cin.getline(name,50);
  
  cout<< endl << endl;
  cout<< "Your input summary:"<<endl;
  
  
  cout<<"Name    :" << name << endl;
  cout<<"A       :" <<  a   << endl;
  cout<<"C       :" <<  c   << endl;
  cout<<"B       :" <<  b   << endl;
  
 
}

