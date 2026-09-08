//time limit exceded for high input
#include <bits/stdc++.h>
using namespace std;
long long projects(long long x,long long y,long long k){
    long long sum=0;
for(long long i=0;i<k;i++){
    sum=sum+(y%x);
    x=x+1;
    y=y+1;
}
return sum;
}

int main(){
    long long t,a,b;
    long long c;
    cin>>t;
    long long arr[t];

    for(int i=0;i<t;i++){
        cin>>a;
        cin>>b;
        cin>>c;
        arr[i]=projects(a,b,c);
    }
    for(int i=0;i<t;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}