#include <iostream>
#include <cstdlib>
using namespace std; 
int main()
{ 
    setlocale(LC_ALL, "Russian");
   int myarr2[30], outarr[30]; 
   int total,j,locic,locic1,locic3;
	
	
	
	 
	 int i = 1;    
    do
	 {

	    myarr2[i] = rand() % 10 +1;
	    i++;		
  	}
	 while (i<=30); 
	
	
	
	for (int n=1;n<=30;n++)
	{
	   cout<<myarr2[n];
	   cout<<" ";	
	}
	
	
	
	// 
	j=1; 
	while (j<=30) 
	{
	
    	locic = j%7;	
	    if (!locic)	
	       {
	       total = total + j;	
    	   };
	  
	    locic1 = j%3;
	         if (!locic1)	
	       {
	       myarr2[j] = myarr2[j] + 2;	
    	   };
    	   
    	locic3 = j%5;
	         if (!locic3)	
	       {
	       myarr2[j] = myarr2[j] - 3;	
    	   };   
	   
	   j++;	
	} 
	
	cout<<"Сумма каждого 7 -ого = " << total <<endl;  
	    
    for (int k=1;k<=30;k++)
	{
	   cout<<myarr2[k];
	   cout<<" ";	
	}
    
		   
 
	return 0; 
}
