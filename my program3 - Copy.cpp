#include <iostream>
using namespace std;

class namecalling
{
   private :
        float n;
   
   public :
      
      float ramucalling()
	 {
	   
	    cout << "\nENTER THE NUMBER :";
        cin  >>n;
	     
		if(n<100)
            cout << "\nRAMU."; 
	    else 
		    cout << "\nSOMU.";	    
		
	  }
	  
};

int main()
{
  namecalling a ;
 
  
  
  
  char c;
  
  do{
      a.ramucalling();
 
  
      cout << "\n DO YOU WANT CONTINUE YES OR NO :";
      cin  >> c;
  
    } while( c=='Y' || c=='y');
  
}

