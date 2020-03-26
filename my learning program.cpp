#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int i,j;
  int max=0;
  int mat[3][3];
  
  cout<<"Enter the 9 numbers:";
  
  
  for(i=0;i<3;i++)
       for(j=0;j<3;j++)
	   {
	     cin>>mat[i][j];
		 
		 if(i==0 && j==0)
		     max=mat[i][j];
		 
		 else if(max<mat[i][j])
		     max=mat[i][j];
		 
	   }
       
   for(i=0;i<3;i++)
      
		{
	
          for(j=0;j<3;j++)
		        cout<< setw(4)<<mat[i][j];
		  
		}
		
		cout<<"maximum in the given matrix :"<<max;
        
		return 0;
}

