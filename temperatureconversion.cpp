#include <iostream>
#include <iomanip>

using namespace std;

class temperatureconversion
{
  private :
        float fahrenheit,celsius;
  public:
        float findcelsius(float f)
		{
		  fahrenheit=f;

		  
		  celsius=(5/9.0)*(f-32);
		  
		  return celsius;
		    
		}
		
		float findfahrenheit(float c)
		{
		  celsius=c;
		  
		  fahrenheit=(c*9.0/5)+32;
		  
		  return fahrenheit;
		}
		
		float getcelsius()
		{
		  return celsius;
		}
		
		float getfahrenheit()
		{
		  return fahrenheit;
		}
};

int main()
{
  temperatureconversion f,c;
  
  f.findcelsius(130);
  c.findfahrenheit(45);
  
  cout<<f.getfahrenheit() << " deg F in Celsius is " << f.getcelsius()<< endl;
  cout<<c.getcelsius () << " deg C in fahrenheit is " << c.getfahrenheit();
  
}

