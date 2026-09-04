#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int c=0;
    int time=240;
    for(int i=1;i<=n;i++){
        time=time-5*i;
        if(time>=k){
            c++;
        }
        else{
            break;
        }
    }
    cout<< c;
    return 0;
    }
