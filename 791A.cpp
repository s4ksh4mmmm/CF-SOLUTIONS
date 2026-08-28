#include <bits/stdc++.h>
using namespace std;
int main(){
    int l,b;
    cin>>l;
    cin>>b;
    int y=0;
    while(l<=b){
        y++;
        l=l*3;
        b=b*2;
    }
    cout<<y;
    return 0;
}