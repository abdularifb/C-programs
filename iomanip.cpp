#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
  int n=100;
  float x=1234.54321;
  
  cout<<"DECIMAL    :" << dec << n << endl;
  
  cout<<"HEXADESIMAL:" << hex << n << endl;
  
  cout<<"OCTAL      :" << oct << n << endl;
  
  cout<<"FIXED      :" << fixed << x << endl;
  
  cout.precision(2);
  cout<<"PRECISION  :" << x << endl;
  
  cout<< setw(15) << left <<"DECIMAL    :" << setw(10) << right << dec << n << endl;
  
  cout<< setw(15) << left <<"HEXADESIMAL:" << setw(10) << right << hex << n << endl;
  
  cout<< setw(15) << left <<"OCTAL      :" << setw(10) << right << oct << n << endl;
  
  cout<< setw(15) << left <<"FIXED      :" << setw(10) << right << fixed << x << endl;
  
  return 0;
  
  
}

