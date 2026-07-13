#include<iostream>
using namespace std;

int main () {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    //For LOOP

    for (int i=0; i<=5 ;i++){
      int mul=i*2;
      cout<<i<<"*"<<"2 = "<<mul<<endl;
    }
    
    //WHILE LOOP 
    int j=0;
    while(j <= 5){
        cout<<j<<endl;
        j++;

    }
    return 0;

}