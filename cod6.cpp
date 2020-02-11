#include <iostream>
#include <cstdlib>
#include <math.h>
#include <string>
#include <cstring>
// Работа с символьными массивами и строками
int main(){
   setlocale(LC_ALL, "Russian");	
   using namespace std;
      char    tmp_character_empty[20];
      char    character_empty[20];
      char    character_not_empty[20] = "Char Testing";
      string  string_empty; 
      string  string_not_empty = "String Testing";
      string modul_text = "Такой буквы нет в этой строке";
      
      string string_c11[] = {"asdfasdfsd"};
      
      string tmp;
      string  char_tmp;
      
      char ch_st_find;
      int total_ch;
      int total_st;
   // Ввод данных
   cout<<"Введите строку для симольного массива=";
   cin>>character_empty;
   
   cout<<"Введите строку для симольного массива=";
   cin>>string_empty;
   
   
   cout<<"Введите строку для поиска=";
   cin>>ch_st_find;
   //Контрольный вывод
   
   cout<<character_empty<<endl;
   cout<<string_empty<<endl;
   
   cout<<character_empty[3]<<endl;
   cout<<string_empty[3]<<endl;
   
   cout<<character_empty[0]<<endl;
   cout<<string_empty[0]<<endl;
   
   tmp = string_empty + string_empty;
   cout<<tmp<<endl;
   

       strcpy(tmp_character_empty,character_empty);
       strcat(character_empty,tmp_character_empty);

   
   
   total_ch=0;
   for (int i=0;i<strlen(character_empty);i++) {
   	    
   	    if (character_empty[i]==ch_st_find)
   	      total_ch++;
   }
   
   if (total_ch!=0)
     cout<<total_ch<<endl;
   else
     cout<<modul_text<<endl;   
   
   
    total_st = 0;
   for (int j=0;j<tmp.size();j++) {
   	
   	   
   	   if (tmp[j]==ch_st_find)
   	      total_st++;
   }
   
   
   if (total_ch!=0)
     cout<<total_st<<endl;
   else
     cout<<modul_text<<endl;   

   
}
