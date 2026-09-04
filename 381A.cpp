#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int d=0;
    int s=0;
    int f=0;
    int e=n-1;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(i%2==0){
            if(arr[f]>arr[e]){
            s=s+arr[f];
            f=f+1;
            }
            else{
                s=s+arr[e];
            e=e-1;
            }
        }
        else{
             if(arr[f]>arr[e]){
            d=d+arr[f];
            f=f+1;
            }
            else{
                d=d+arr[e];
            e=e-1;
        }
    }
}
    cout<< s << " "<< d;
    return 0;

}
