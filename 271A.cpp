#include <bits/stdc++.h>
using namespace std;
bool diffdigits(int x){
    int k=0;
for(int i=x;i!=0;i=i/10){
    int d=i%10;int c=0;
    for(int j=x;j!=0;j=j/10){
        int dd=j%10;
        if(d==dd){
          c++;
        }
    }
    if(c>=2){
        k=c;
    }
}
if(k>1){
    return false;
}
else {
    return true;
}
}
int main(){
    int n;
    cin>>n;
    int t=n+1;
    while(diffdigits(t)!=true){
        t=t+1;
    }
    cout<<t;
  return 0;
}