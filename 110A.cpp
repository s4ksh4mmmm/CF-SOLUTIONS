#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>> n;
    int c=0;

    for(long long i=n;i!=0;i=i/10){
        int d=i%10;
        if(d==4 || d==7){
            c++;
        }
    }
    if(c==4 || c==7){
        cout<<"YES";
    }
    else cout<<"NO";
    return 0;
}