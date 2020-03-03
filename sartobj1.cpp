#include <iostream>
using namespace std;
// Классы и объекты
int main(){
   setlocale(LC_ALL, "Russian");
   	
   class myClass {
   	public:
   		int a;
   		int b;
   		int sum3;
   		int sum(){
   			return a+b;
		   }
		int sum2(){
			int sum = a+b;
   			return sum;
		   }
		void sw2(){
			sum3 = a+b;
			cout<<sum3<<endl;
		}      
   };
   
   myClass exam;
   
   exam.a = 2;
   exam.b = 2;
   
   cout<<exam.sum()<<endl;
   cout<<exam.sum()<<endl;
   exam.sw2();
   return 0;  
}
