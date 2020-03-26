#include<iostream>
using namespace std;

class simpleinterest
{
  private:
    float p,r,n;
  
  public:
    char name[30];
    float si;
	
	void realinputs()
	{
	   cout<< "Enter name:";
	   cin.getline(name,30);
	   
	   cout<< "Enter principal:";
	   cin>> p;
	   
	   cout<< "Enter rate of interest:";
	   cin>> r;
	   
	   cout<< "Enter number of years:";
	   cin>> n; 
	   
	   char tmp[10];
	   cin.getline(tmp,10);
	   
	}
	
	float calculate()
	{
	  si= p * r * n /100;
	  
	}
	
	float getsimpleinterest()
	{
	 return p * r * n /100;
	 
	}
	
    float getprincipal()
	{
	  return p;
	}
	
	float getrateofinterest()
	{
	  return r;
	  
	}
	
	float getnoofyears()
	{
	  return n;
	}

	 
	void printoutput() 
	{
	 
	 cout<< "\n Name             ...."<<name;
     cout<< "\n principal        :" << p;
     cout<< "\n rate of interest :" << r;
     cout<< "\n no of years      :" << n;
     cout<< "\n simple interest  :" << si;
	
	}
	   
};

int main()
{
  simpleinterest a,b,c,d;
  simpleinterest h;
  
  a.realinputs(); a.calculate();
  b.realinputs(); b.calculate();
  c.realinputs(); c.calculate();
  d.realinputs(); d.calculate();
  
  
  if(a.si > b.si && a.si> c.si && a.si > d.si)
      h=a;
  else if(b.si > a.si && b.si > c.si && b.si > d.si)
      h=b;
  else if(c.si > a.si && c.si > b.si && c.si > d.si)
      h=c;
  else 
      h=d;
  
 h.printoutput();  
 
}

