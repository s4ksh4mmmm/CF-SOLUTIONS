#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int c=0;
 for(int i=1;i<=n;i++){
    int p,q;
    cin>>p;
    cin>>q;
    if((q-p)>=2){
        c++;
    }
 }
 cout<<c;
 return 0;
}