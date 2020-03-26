#include <iostream>
using namespace std;

class clourballs
{
  private:
     float tp,tr,tw,p,r,w;
  public:
     float calculatepinkballs( )
	 {
	   cout<< "ENTER THE P VALUE:";
	   cin >> p;
	   
	   tp=p*50;
	    
	 }
	 
	 float calculateredballs()
	 {
	    cout<< "ENTER THE R VALUE:";
	    cin >> r;
	   
	   tr=r*100;
	 }
	 
	 float calculatewhiteballs()
	 {
	
	   cout<< "ENTER THE W VALUE:";
	   cin >> w;
	    
	   tw=w*150;
	 }
	 
	 float getpinkballs()
	 {
	  return tp;
	 }
	 float getredballs()
	 {
	   return tr;
	 }
	 
	 float getwhiteballs()
	 {
	   return tw;
	 }
	
};

int main()
{
  clourballs a,b,c;
  
  char f;
   
do
  { 
   
    a.calculatepinkballs();
    b.calculateredballs();
    c.calculatewhiteballs();
	
    
	cout << " \nPINK BALLS    :" << a.getpinkballs();
    cout << " \nRED BALLS     :" << b.getredballs();
    cout << " \nWHITE BALLS   :" << c.getwhiteballs();
  

    
    cout << " \nDO YOU WANT CONTINUE YES OR NO :";
    cin  >> f;
   
   
   }while(f=='y'|| f=='Y');
}

