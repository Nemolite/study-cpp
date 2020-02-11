#include <iostream>
using namespace std;
 
struct DList {
	int m;
	DList *p;
}; 

int main(){ 
  int n;
  DList *ukas;
  ukas = new DList;
  cout<<ukas<<endl;
  ukas->m = 20;
  ukas->p = ukas;
  cout<<ukas->m<<endl;
  cout<<ukas->p<<endl;
  return 0;
}
