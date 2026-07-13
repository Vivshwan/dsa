#include <iostream>
using namespace std;
//Function is a set of code which get executed when the function is called.
//It is of different types :
//void , return , parameterized , non-parameterized
//pass by value(copy value is given) and reference(original value is given )  
void fn1(){
    cout<<"ViVsHwAn"<<endl;
}
int sum(int  x,int &y ){
    y+=5;
    x+=5;
    return x+y;
}
int main (){
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  fn1();
  int a,b;
  cin>>a>>b;
  cout<<sum(a,b)<<"\n";
  cout<<"pass by value : "<<a <<" pass by reference : "<<b;
  return 0;

}