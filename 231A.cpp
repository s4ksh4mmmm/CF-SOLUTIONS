#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>> n;
    int sum=0;
    for(int i=1;i<=n;i++){
        int c=0;
        for(int j=1;j<=3;j++){
            int k;
            cin>> k;
            if(k==1){
                c++;
            }
        }
        if(c>=2){
            sum=sum+1;
        }
    }
    cout<<sum;
    return 0;
}