#include <iostream>
using namespace std;

int myfunc(int a,int b){
	int sum;
	sum = a + b;
	return sum;
}

void myfunc2(int a,int b){
	int sum;
	sum = a + b;
	cout<<sum<<endl;
}


void myfunc3(){
	int sum;
	sum = 2 + 5;
	cout<<sum<<endl;
}

double fun777(int c){
	return 25/c;
}

int alt(int s,int  b);

int main()
{ 
cout<<myfunc(2,2)<<endl;
myfunc2(2,3);
myfunc3();
cout<<fun777(2)<<endl;


cout<<alt(2,2)<<endl;  
  return 0; 
}

int alt(int s,int  b){
	return s+b;
}
  
