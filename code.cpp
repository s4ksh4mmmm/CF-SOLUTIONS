#include <bits/stdc++.h>

using namespace std;


int main(){
    int size;int target;
    cout<<"enter target=";
     cin>> target;
    cout<< "enter size of array=";
    cin>>size;
    cout<<"enter values in array=";
    int arr[size];
     
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
   int t;int f;
    for(int i=0;i<size-1;i++){
       for (int j=i+1;j<size;j++){
        if(arr[i]+arr[j]==target){
         t=i;f=j;
        }
       }
        }
    
cout<<target <<"=" << arr[t]<< "+"<< arr [f];
   return 0;
}
