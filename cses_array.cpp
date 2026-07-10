#include<iostream>
using namespace std;

void quest1(int n){ // sum of array 
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];  
    }
    
    int sum = 0;
    for(int i = 0; i < n; i++){  
        sum += arr[i];
    }
    cout << sum;
}
void quest2(int n){ //element count 
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int count = sizeof(arr)/sizeof(arr[0]);
    cout<<count;

}
void quest3(int n){ //average of array
    int arr[n];
    for(int i =0 ; i<n ; i++){
        cin>>arr[i];
    }
    float sum =0;
    for(int i =0 ; i<n ;i++){
        sum +=arr[i];
    }
    cout<<"Average = "<<sum/n;

}
void quest4(int n){ //min and max
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min=arr[0];
    int max=arr[0];
    for (int i = 0;i<n;i++){
        if (arr[i]<min){
            min=arr[i];
        }
        if (arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"minimum "<<min<<endl;
    cout<<"maximum "<<max<<endl;
}
void quest5(int n){ //count occurence
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int given=3;
    int count=0;
    
    for (int i=0;i<n;i++){
        if (arr[i]==given){
            count+=1;
        }

    }
    cout<<"Occurence of "<<given<<" is "<< count <<endl;

}
void quest6(int n){ //reverse array
    int arr[n];
    int rev[n];
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    for(int j=0;j<n;j++){
        rev[j]=arr[size-j-1];
    }
    for(int i=0;i<n;i++){
        cout<<rev[i]<<" ";
    }

}
void quest7(int n){ //odd and even
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count__even=0;
    int count__odd=0;
    int even[n];
    int odd[n];
    for (int i=0;i<n;i++){
        if (arr[i]%2==0){
            
            count__even+=1;
            
            even[count__even-1]=arr[i];
            }
        else {
            
            count__odd+=1;
            odd[count__odd-1]=arr[i];
        }
    }
    cout<<"EVEN"<<endl;
    for(int i=0 ;i<count__even;i++){
        cout<<even[i]<<" ";
    }
    cout<<endl;
    cout<<"ODD"<<endl;
    for(int i=0 ;i<count__odd;i++){
        cout<<odd[i]<<" ";
    }
}
void quest8(int n){ //duplicate check
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    for(int i =0;i<n;i++){
        for(int j=0;j<=n;j++){

            if(arr[i]==arr[i+j+1]){
                count+=1;
            }
        }
        if (count>0){
         cout<<"duplicate exist";
         break;}

    }
    if (count==0){
        cout<<"no duplicate value exists";
    }

}
void quest9(int n){ //second largest
    int arr[n];
    for(int i =0 ; i<n ;i++){
        cin>>arr[i];
    }
    int max = arr[0];
    int smax = arr[0];
    for(int i =0;i<n;i++){
        if (max<arr[i+1]){
            max=arr[i+1];
        }
        else if(smax<arr[i] && arr[i]!=max){
            smax=arr[i];
            
        }
    }
    cout<<max;
    cout<<smax;
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    quest7(n);
    return 0;
}