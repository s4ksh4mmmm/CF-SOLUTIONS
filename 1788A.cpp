
#include <bits/stdc++.h>
using namespace std;

int onetwo(const vector<int>&ar,int size){
    
    int result;
    int k=1;
    int min=INT_MAX;
    for(int i=0;i<size;i++){
        int prod1=1;
    int prod2=1;
    if(k<size){
    for(int j=0;j<k;j++){
        prod1=prod1*ar[j];
    }
    for(int j=k;j<size;j++){
       
        prod2=prod2*ar[j];
    }
    if(prod1==prod2){
        if(k<min){
            min=k;
        }
    }
    k++;
    
}
    }
    
    if(min==INT_MAX){
        result=-1;
    }
    else{
        result=min;
    }
    return result;
}   

int main()
{
    int t;
    cin >> t;
    int n;
    int farr[t];
    for(int i = 0; i < t; i++){
        cin >> n;
        vector<int>arr(n);
        for(int j = 0; j < n; j++){
            cin >> arr[j];
        }
       
        farr[i]=onetwo(arr,n);
    }
    for(int j = 0; j < t; j++){
        cout << farr[j] << endl;
    }
    return 0;
}
