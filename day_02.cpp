#include <iostream>
using namespace std;

int main (){
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  //if else statements 
  int age;
  cin>>age;

  if (age>18){
    cout<<"eligible" ;
  }
  else if (age==18)                //not mandatory 
  {
    cout<<"learning license";

  }
  else {                          //if statemnent can excute
    cout<<"not eligible";
}
  return 0;
  
}