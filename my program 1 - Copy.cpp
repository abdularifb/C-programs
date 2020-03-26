#include<iostream>
using namespace std;

class mango
{
  private :
     float tw ,ty,number;
  public:
    
     float calculatewhitemango(float n)
	 {
	 
       number=n;   
	   tw= n*4;
	 }   
	 
	 float calculateyellowmango(float n)
	 {
       number=n; 
	   ty=n*3;
	   
	 }
	 
	 float getwhitemango()
	 {
	   return tw;
	 }
	 
	 float getyellowmango()
	 {
	   return ty; 
	 }
	 
};

int main()
{
  mango a,b;
  
  
  
  

  a.calculatewhitemango(20000);
  b.calculateyellowmango(400000);
  
  cout<< "\nTOTAL WHITE MANGO : " << a.getwhitemango();
  cout<< "\nTOTAL YELLOW MANGO: " << b.getyellowmango();
}

