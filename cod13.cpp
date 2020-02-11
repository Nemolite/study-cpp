#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void outarr(int arr[9]){
	for(int i=1;i<=9;i++){
		cout<<arr[i]<<" ";
	}
}


void surarr(int arr[9]){
	for(int i = 0; i < 9; i++)
         {
            int j = 9;
            int tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            j--;
         }
}

void oarr(int w[][3]){
	 for(int a=1;a<=3;a++) {
 	for(int b=1;b<=3;b++){
 	
	 cout<<w[a][b]<<" ";
	 
 		
	 }
	 cout<<endl;
 }
	
}



int main()
{
  int k[9];
  
  for (int n=1;n<=9;n++){
  	k[n] = n;
  	
  }
  
  outarr(k);
 
  cout<<endl;
  outarr(k);
  
 int p[3][3];
 cout<<endl;
 int r=1;
 for(int a=1;a<=3;a++) {
 	for(int b=1;b<=3;b++){
 	
	 p[a][b] = k[r];
	 r++;	
 	cout<<p[a][b]<<endl; 	
	 }
 }
 
 oarr(p);
  
  return 0;
}
