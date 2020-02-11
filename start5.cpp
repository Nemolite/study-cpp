#include <iostream>
using namespace std; 
int main()
{ 
int n,*p,m;
int &copy=n;
    p = &n;
 
copy=100;
m = 100;
n++;
cout<<n<<"\n";
cout<<copy<<"\n"; 
(*p)++;
cout<<n<<"\n";
cout<<copy<<"\n";
 
 cout<<p<<"\n";
 cout<<&m<<"\n";
return 0; 
}
