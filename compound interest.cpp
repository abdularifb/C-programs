#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

class compoundinterest
{
  private :
     float p,r,n;
	 float cinterest;
	 
  public :
     void readinputs()
	 {
	    cout << "ENTER PRINCIPAL:";
		cin >> p;
		
		cout << "ENTER RATE INTEREST:";
		cin >> r;
		
		cout << "ENTER NO OF YEARS:";
		cin >> n;
		
		
	 }
	 
	 void calculate()
	 {
	   cinterest=p*pow(1+r/100,n);
	   
	 }
	 
	 void display()
	 {
	   cout << " PRINCIPAL        :"<< p << endl;
	   cout << " RATE OF INTEREST :"<< r << endl;
	   cout << " NO OF YEARS      :"<< n << endl;
	   cout << " COMPOUND INTEREST:"<< cinterest << endl;
	 }
	 
};	   
	 int main()
	 {
	   compoundinterest ci;
	   char c;
	   
	   do{
	        ci.readinputs();
			ci.calculate();
			ci.display();
			
			cout << " THIS PROGRAM IS CONTINUE (Y/N) :"<< endl ;
			cin.ignore();
			cin >> c;
			
	     }while(c == 'y' || c == 'Y');
	  
	    
	 }
	 
	
    
 


