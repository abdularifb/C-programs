     #include<iostream>
#include<iomanip>

using namespace std;

class mycrypt
{
  public:
     string encrypt(string s)
	 {
	   string res ;
	   char c;
	   int i;
	   for(i=0;i<s.length();i++)
	   {
	     c=s[i];
		 c++;
		 res.append(1,c); 
		 
	   }
	   
	   return res;
	   
	 }
	 
	 string decrypt (string s)
	 {
	   string res ;
	   char c;
	   int i;
	   for(i=0;i<s.length();i++)
	   {
	     c=s[i];
		 c--;
		 res.append(1,c); 
	
		 
	   }
	   
	   return res;
	 }
	 
};

int main()
{
  mycrypt a;
  string s="ABCDEF";
  string es= a.encrypt(s);
  
  cout<< "encrypt string :" << es << endl;
  cout<< "decrypt string :" << a.decrypt(es) << endl; 
}

