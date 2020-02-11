#include <iostream>
using namespace std;
int main()
{ 
  int n[10],*p;
  p=n;
  
  n[0] = 11;
  *(p+1) = 12;
  n[2] = 13;
  *(p+3) = 14;
 
 
  for(int i=0;i<4;i++)
  {  
    cout<<*(p+i)<<" ";
  } 
  cout<<"\n";
  
  
  
  
  
  
  
  
   
  return 0; 
}
