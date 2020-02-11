#include <iostream>
using namespace std;
int main()
{ 
 
 int *a[4];
 
 int p0 = 5;
  int p1 = 6;
   int p2 = 7;
    int p3 = 8;
     int p4 = 9;
 
 a[0] = &p0;
  a[1] = &p1;
   a[2] = &p2;
    a[3] = &p3;
     a[4] = &p4;

  for(int i=0; i<=4;i++) 
  {
  	  cout<<a[i]<<" = "<<*a[i]<<endl;
  }
  
   for(int j=0; j<=4;j++) 
  {
  	  cin>>*a[j]>>endl;
  }

  
  return 0; 
}
  
