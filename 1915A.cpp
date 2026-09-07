#include <bits/stdc++.h>
using namespace std;
int oddoneout(int x,int y,int z){
int odd;
    if(x==y){
        odd=z;
    }
    else if(z==y){
        odd=x;
    }
    else {
        odd=y;
    }
    return odd;
}
int main(){
    int n;
    cin>> n;
    int arr[n];
    int a,b,c;
    for(int i=0;i<n;i++){
        cin>>a;
        cin>>b;
        cin>>c;
        arr[i]=oddoneout(a,b,c);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

    }