#include <iostream>
using namespace std;
void quest14(long long x){//Removing digits
    int count=0;
    long long n= x;
    int update =x;
    for (int i=0;i<n;i++){
       int max=0;
       
       while (x>0){
          int a=x%10;
          if(a>max){
             max=a;
            }
           x=x/10;
        }
        update-=max;
        x=update;
        count+=1;
        if (update ==0){
            break;
        }
    }
    cout<<count;
}

int main(){
    long long sequence ;
    cin>>sequence;
    quest14(sequence);
    return 0;

}