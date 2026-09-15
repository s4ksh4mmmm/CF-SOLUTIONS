#include <bits/stdc++.h>
using namespace std;
int easy(int x){
int c=0;int a=1;int b=x-1;
for(int i=a;i<x;i++)
{
        for(int j=b;j>=1;j--){
       if(i+j==x){
        c++;
       }
    }
}
return c;
}

int main(){
    int t,n;
    cin>>t;
    int arr[t];

    for(int i=0;i<t;i++){
        cin>>n;
        arr[i]=easy(n);
    }
    for(int i=0;i<t;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}