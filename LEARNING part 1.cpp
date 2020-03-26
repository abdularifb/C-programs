#include<iostream>
using namespace std;

class simpleinterest
{
 
 private:
   float p,r,n;
 
 public:
   float si;
   
   void realinputs()
   {
      cout<< "Enter principal:";
	  cin>> p;
	  
	  cout<< "Enter rate of interest:";
	  cin>> r;
	  
	  cout<< "Enter no of years:";
	  cin>> n;
	  
	   
   }
   
   float calculate()
   {
     si= p * r * n /100;
	 
   }
   
   float getsimpleinterest()
   {
     p * r * n /100;
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
   
    
};

int main()
{
  simpleinterest si;
  si.realinputs();
  si.calculate();
  
  cout<< "\n your inputs are ....";
  cout<< "\n principal          :" << si.getprincipal();
  cout<< "\n rate of interest   :" << si.getrateofinterest();
  cout<< "\n no of years        :" << si.getnoofyears();
  cout<< "\n simple interest    :" << si.si;
  
  
  
  
  
  
}

