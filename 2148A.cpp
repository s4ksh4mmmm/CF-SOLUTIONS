
#include <bits/stdc++.h>
using namespace std;
int sublime(int x,int n) {
 int result;
 if(n%2==0){
    result=0;
 }
 else{
    result=x;
 }
return result;
}

int main() {
    int x,n,t;
    cin >> t;
    int farr[t];
    for(int i=0;i<t;i++){
        
        cin >> x;
        cin >> n;
       
      farr[i]=sublime(x,n);
    }
    for(int i=0;i<t;i++){
        cout<<farr[i]<<endl;
    }
    return 0;
}