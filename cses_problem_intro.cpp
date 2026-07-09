#include<iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
void quest1(long int x){//wierd algorithm 
    bool cond = true ;
    while (cond==true) {
        if (x==1){
            cout<<x;
            cond=false;
            }
        else if (x%2==0){
            cout<<x<<" ";
            x=x/2; 
        }
       else {
            cout << x << " ";
            x = x * 3 + 1;
        }
 
    }
}
void quest2(long int x){//Missing numbers
    long total=x * (x+1)/2;
    long sum=0;
    for (int i=0;i<x-1;i++){
     long int n;
     cin>>n;
     sum+=n;
    }
    cout<<total-sum;

}
void quest3(string s){//Repetitiions
    int currentlen = 1 ;
    int maxlen = 1;
    for (int i=0; i<s.length() ;i++){
        if (s[i]==s[i-1]){
            currentlen+=1;
        }
        else {
            currentlen=1;
        }
        if (currentlen > maxlen){
            maxlen=currentlen;
        }
    }
    cout<<maxlen;
   
}
void quest4(int n ){//Incresing Array
    int prev =0;
    long long int moves =0;
    for (int i =0 ; i <n ;i++){
        int current;
        cin>>current;
        if (current < prev){
            moves+=prev-current;
        }
        else{
            prev = current ;
        }
    }
    cout<<moves;
}
void quest5(int n ){//Permutations
    
        if (n==1){
            cout<<1;
        }
        else if (n<4)
        {
            cout<<"NO SOLUTION";
        } 
        else{
           for (int i =2;i<=n;i+=2){
                cout<<i<<" ";
            }
            for (int i=1;i<=n;i+=2){
                cout<<i<<" ";
            }
        }
        cout<<endl;   
}
void quest6(long long n){//Number spiral
    long long result;
    for (int i=0;i<n;i++){
        long long y,x;
        cin>>y>>x;
        long long n =max(y,x);
        if (n%2==0){
            if (y==n){
                result=(n*n)+(-x+1);
            }
            else{
                result=(n-1)*(n-1)+y;
            }
        }
        else{
            if (x==n){
                result=(n*n)+(-y+1);
            }
            else{
                result=(n-1)*(n-1)+x;
            }
        }
        cout<<result<<endl;
    }
}
void quest7(int x){//Two Knights
    for (long long k=1;k<=x;k++){
        long long total=(k*k) *(k*k-1)/2;
        long long attack = 4*(k-1)*(k-2);
        long long result =total-attack;
        cout<<result<<endl;
    }
}
void quest8(long long x){//Bit string
    const int MOD = 1000000007;
    long long result =1;
    long long base=2;
    while (x>0){
        if (x%2==1){
            result=result *base % MOD;
        }
        {base= (base*base)%MOD;
        x/=2;}
    }
    cout<<result<<endl;
}
void quest9(long long n){//Trailing zeros
    long long count =0;
    for(long long i=5;i<=n; i*=5){
        count+=n/i;
    }
    cout<<count<<endl;
}
void quest10(long long x){//Coin pile
    for (long long i =0;i<x;i++){
        long long a,b;
        cin>>a>>b;
        if ((a+b)%3==0 && (max(a,b) <= 2*min(a,b))){
                cout<<"YES"<<endl;
            }
        else {
            cout<<"NO"<<endl;
        }
    }
}
void quest11(long long x){//Gray code
    long long total = pow(2,x);
    for(long long i=0;i<total;i++){
        int gray=i ^ (i>>1);

        for (long long j=(x-1);j>=0;j--){
            cout<<((gray>>j)&1);
        }
        cout<<endl;
    }
}
void quest12(int n,int from ,int aux , int to , int& count){//TOH
    if (n==0){return ;}
    else if (n==1){
        cout<<from<<" "<<to<<endl;
        return;
    }
    else {
        quest12(n-1,from,to,aux,count);
        cout<<from<<" "<<to<<endl;
        count++;

        quest12(n-1,aux,from,to,count);

    }
}
void quest13(string s){//Creating strings
    sort(s.begin(),s.end());
    vector<string> permutation;
    do {
        permutation.push_back(s);
    }while(next_permutation(s.begin(),s.end()));

    cout<<permutation.size()<<endl;
    for (const string& perm : permutation){
        cout<<perm<<endl; 
    }
}
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
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string sequence ;
    cin>>sequence;
    quest3(sequence);
        // long long a;
        // cin>>a;      
        // //quest11(a);
        // cout<<(pow(2,a) - 1)<<endl;
        // int count =0;
        // quest12(a,1,2,3,count);

    return 0;

}