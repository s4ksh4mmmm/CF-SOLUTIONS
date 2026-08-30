#include <bits/stdc++.h>
using namespace std;
int main(){
    int k,n,w;
    cin>>k;
    cin>>n;
    cin>>w;

    int sum;
    int b;
    sum=(k*w*(w+1))/2;
     b= sum-n;
     if(b>0){
     cout<< b;
     }
     else {
        cout<<"0";
     }
     return 0;
}