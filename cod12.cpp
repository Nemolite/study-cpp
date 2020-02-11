#include <iostream>
using namespace std;

void myfunc3(int *arg,int *arg2){

cout<<*arg<<endl; 
cout<<arg<<endl;

cout<<*arg2<<endl; 
cout<<arg2<<endl;

int sum2 = *arg + *arg2; 
cout<<sum2<<endl;   
cout<<&sum2<<endl; 
*arg=*arg+1;
*arg2=*arg2+1;

cout<<"==============="<<endl;	
cout<<*arg<<endl; 
cout<<arg<<endl;

cout<<*arg2<<endl; 
cout<<arg2<<endl;	
}

int main()
{ 

int d,d2;
d = 100;
d2 = 100;

myfunc3(&d,&d2);


cout<<d<<endl;   
cout<<d2<<endl; 

 
  return 0; 
}


  
