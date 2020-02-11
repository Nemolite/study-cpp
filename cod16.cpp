#include <iostream>
using namespace std;
 
struct DList {
	int m;
	DList *p;
}; 

int main(){ 
  int n;
  DList *ukas,*ukas1,*ukas2;
  ukas = new DList;
  ukas1 = new DList;
  ukas2 = new DList;
  cout<<ukas<<endl;
  cout<<ukas1<<endl;
  cout<<ukas2<<endl;
    cout<<"---------------"<<endl;
  ukas->m = 20;
  ukas->p = ukas1;
  cout<<ukas->m<<endl;
  cout<<ukas->p<<endl;
 
  ukas1->m = 100;
  ukas1->p = ukas2;
  cout<<ukas1->m<<endl;
  cout<<ukas1->p<<endl;
  
  ukas2->m = 400;
  ukas2->p = ukas;
  cout<<ukas2->m<<endl;
  cout<<ukas2->p<<endl;
  return 0;
}
