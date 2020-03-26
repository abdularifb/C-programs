#include <iostream>
using namespace std;

struct student
{
  char name[30];
  int age;
  
};


int main()
{
  struct student a,b;
  cout<<" Enter name:";
  cin.getline(a.name,30);
  cout<<" Enter name:";
  cin.getline(b.name,30);
  
  cout<<" Enter Age:";
  cin >> a.age;
  cout<<" Enter Age:";
  cin >> b.age;
  
  cout<< " Hello " <<  a.name  << " you are " << a.age << " years old ";
  cout<< "\n Hello "<< b.name <<" you are " << b.age << " years old "; 

  
}


