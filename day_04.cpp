#include<iostream>
using namespace std;

int main(){
    //ARRAYS
    freopen("input.txt", "r",stdin);
    freopen("output.txt", "w",stdout);
    int arr[5];            //1D array
    cin>>arr[0]>>arr[1];
    cout<<arr[1]<<endl;

    int srr[2][3];
    cin>>srr[0][0]>>srr[0][1]>>srr[0][2];
    cin>>srr[1][0]>>srr[1][1]>>srr[1][2];
    cout<<srr[0][2] ;  ;
    return 0;




}