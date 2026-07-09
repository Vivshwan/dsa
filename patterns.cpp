#include<iostream>
using namespace std ;

void pat01(int x ){
    for (int i =0; i<x ; i++){
        for(int j =0 ; j<=i ; j++){
            cout <<" * ";

        }
    cout<<endl;
    }
}
void pat02(int x ){
    for (int i =0; i<x ; i++){
        for(int j =0 ; j<=i ; j++){
            cout <<j+1<<" ";

        }
    cout<<endl;
    }
}
void pat03(int x ){
    for (int i =1; i<=x ; i++){
        for(int j =1; j<=i ; j++){
            cout <<i<<" ";

        }
    cout<<endl;
    }
}
void pat04(int x ){
    for (int i=1;i<=x;i++){
        for( int j=0; j<x-i+1 ; j++ ){
        cout<<"* ";}
    cout<<endl;
    }
} 
void pat05(int x ){
    for (int i=0;i<x ; i++){
        //space
        for (int j =1; j<=x-i-1; j++){
        cout<<" ";
        }
        //star
        for (int j =1; j<=2*i +1 ; j++){
        cout<<"*";
        }
        //space
        for (int j =1; j<=x-i-1; j++){
        cout<<" ";
        }
        cout<<endl;
    }
}
void pat06(int x ){
    for (int i=0;i<x ; i++){
        //space
        for (int j =0; j<i; j++){
        cout<<" ";
        }
        //star
        for (int j =1; j<=2*x-(2*i+1) ; j++){
        cout<<"*";
        }
        //space
        for (int j =0; j<i; j++){
        cout<<" ";
        }
        cout<<endl;
    }
}
void pat07(int x ){
    for (int i =1 ; i<=2*x-1;i++){
        int stars = i;
        if (i>x)
            stars = 2*x-i;
        for (int j=0; j<= stars; j++){
            cout<<"*";
            }
       
        cout<<endl;
    }
}
void pat08(int x ){
    int space = 2* (x-1);
    for(int i=0 ;i<x;i++){
        //numbers 
        
        for (int j = 1;j<=i ;j++){
            cout <<j;
        }
        //spaces 
        for (int j=1;j<=space;j++){
            cout<<" ";
        }
        
        //numbers 
        for (int j = i; j>=1 ;j--){
            cout <<j;
        }
        cout<<endl;
        space -= 2;
    }
}
void pat09(int x ){
    int num=1;
    for (int i =0;i<x;i++){
        for(int j=1;j<=i;j++){
            cout<<num;
            num+=1;
        }
        cout<<endl;
    }
}
void pat10(int x ){
    for (int i=0;i<=x;i++){
        for(char ch='A';ch<='A'+i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }

}
int main (){
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    int n ;
    cin>>n;
    pat10(n);

    return 0;

}


