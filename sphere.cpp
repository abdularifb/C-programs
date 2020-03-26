#include<iostream>
#include<cmath>
using namespace std;

class sphere
{
  private :
     float radius,area,volume;
  public:
     void setradius(float r)
	 {
	   radius=r;
	   
	   volume = 4*22.0/7* pow(r ,3)/3;
	   area = 4*22.0/7* pow(r,2);
	   
	 }
	 
	 float getvolume()
	 {
	   return volume;
	 } 
	 
	 float getradius()
	 {
       return radius;	  
	 } 
	 
	 float getarea()
	 {
	   return area;
	 }
	  
};

int main()
{
  sphere a;
  
  float r;
  
  cout << "ENTER RADIUS :";
  cin >> r;
  
  a.setradius(r);
  
  cout << "\n RESULT :";
  cout << "\n RADIUS :"<<a.getradius();
  cout << "\n VOLUME :"<<a.getvolume();
  cout << "\n AREA   :"<<a.getarea();

 
}

