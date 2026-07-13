//*******ARRAY*******
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main (){
// int brr[3][2]={{1,2},{3,4},{5,6}};
//     for(int i=0;i<3;i++){
//         for(int j=0;j<2;j++){
//             cout<<brr[i][j]<<" ";
//         }
//         cout<<endl;
//     }


//*******VECTOR**************
// Vector is a dynamic array which can grow and shrink in size.
// It is a part of the C++ Standard Template Library (STL).
// Vectors are implemented as dynamic arrays, which means that they can change their size during runtime.
// They provide a convenient way to store and manipulate collections of data.

// vector<int> vec;
// vector<int> vec1(3);
// vector<int> vec2(3,10);
// vector<vector<int>> mat;
// for(int i =0 ;i <3;i++){
//  cout<<vec2[i]<<" ";
// }
// cout<<endl;
// for(int i =0;i<3;i++){
//     cin>>vec1[i];
// }


vector<int> vec3;

vec3.push_back(1);
vec3.push_back(2);
vec3.push_back(3);
vec3.push_back(6);
vec3.push_back(46);
vec3.push_back(34);
vec3.push_back(10);
vec3.push_back(34);
vec3.push_back(80);
vec3.emplace_back(5);

// cout<<vec3.front()<<endl;
// cout<<vec3.back()<<endl;

// cout<<vec3.size()<<endl;
// cout<<vec3.capacity()<<endl;
for(int i=0 ; i<vec3.size() ; i++){
    cout<<vec3[i]<<" ";

}
vec3.pop_back();
cout<<"After deletion of one element from back"<<endl;


// cout<<vec3.size()<<endl;
// cout<<vec3.capacity()<<endl;


//ASC SORT
sort(vec3.begin(),vec3.end());
cout<<"Sorting in ASC"<<endl;
for(int i=0;i<vec3.size();i++){
    cout<<vec3[i]<<" ";

}
cout<<endl;
//DESC SORT
sort(vec3.rbegin(),vec3.rend());
cout<<"Sorting in DSC"<<endl;
for(int i=0;i<vec3.size();i++){
    cout<<vec3[i]<<" ";

}
cout<<endl;
//REVERSE
reverse(vec3.begin(),vec3.end());
cout<<"Reverse"<<endl;
for(int i=0; i<vec3.size();i++){
    cout<<vec3[i]<<" ";
}
cout<<endl;
vec3.push_back(34);

//COUNT
int c=count(vec3.begin(),vec3.end(),34);
cout<<c<<endl;

//FIND AND DISTANCE
auto it = find(vec3.begin(), vec3.end(), 100);
if (it != vec3.end()) {
    cout << "Element found at index: " << distance(vec3.begin(), it) << endl;
} else {
    cout << "Element not found" << endl;

}
}