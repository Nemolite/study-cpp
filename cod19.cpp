#include <iostream>
using namespace std;
// Классы и объекты
int main(){
   setlocale(LC_ALL, "Russian");
   	
   class myClass {
   	public:
   	int inner_col;
   	int arr[];
   	int mel(int s,int col){
   		inner_col = col;
   		for(int i=0;i<=col;i++){
   			arr[i] = s;
   			s++;
		   } 
   		
	   } //mel
	void sw3(){
	   for(int j=0;j<inner_col;j++){
   			cout<<arr[j]<<endl;
   			
		   }	
	}   
   };
   myClass obj;
   obj.mel(2,7);
   obj.sw3();

   return 0;  
}
