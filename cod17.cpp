#include <iostream>
using namespace std;
int main(){ 
enum color {
	red,
	green,
	blue,
	asdf,
	asdfgas=123123

};  

enum test {
	asf=10,
	erfg=230,

} vid; 

color bus=asdfgas;

cout<<bus<<endl;

vid=erfg;
cout<<vid<<endl;
  return 0;
}
