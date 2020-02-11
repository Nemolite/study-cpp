#include <iostream>
#include <cstdlib>
using namespace std; 
int main()
{ 
   int myarr2[100]; 
  
	 
	 int i = 1;    
    do
	 {

	    myarr2[i] = rand() % 10 +1;
	    i++;		
  	}
	 while (i<=100); 
	 
	  
	    
        int k;
     for(int i= 1;i<=5;i++)
        {  
            for(int j= 1;j<=5;j++)
              {  
                 if (myarr2[j]>myarr2[j+1])
				  {
				  	/* Перестановка элементов массива*/
                 	k = myarr2[j];
                 	myarr2[j] = myarr2[j+1];
                 	myarr2[j+1] = k;
				  }
            
         
              }  
              
            
         
        } 
		
	// Output
	
	for(int i= 1;i<=5;i++)
        {  
           
                cout<<myarr2[i];
                cout<<" ";
  
        }	   
 
	return 0; 
}
