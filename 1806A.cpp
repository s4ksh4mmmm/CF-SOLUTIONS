
#include <bits/stdc++.h>
using namespace std;
long long walking(long long x1,long long y1,long long x2,long long y2) {
 long long dist=0;
 if(y1==y2 && x2<=x1){
    dist=abs(x1-x2);
 }
 else{
   long long side=abs(y2-y1);
    
    
    if((( (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1)  )>(2*side*side) && x1<x2 ) || y1>y2){
        dist=-1;
    } 
    else{
        dist=(side-(x2-x1)) + side;
    }
 }


return dist;
}

int main() {
    long long t,x1,x2,y1,y2;
    cin >> t;
    long long farr[t];
    for(int i=0;i<t;i++){
       cin>>x1;
       cin>>y1;
       cin>>x2; 
       cin>>y2;
      farr[i]=walking(x1,y1,x2,y2);
    }
    for(int i=0;i<t;i++){
        cout<<farr[i]<<endl;
    }
    return 0;
}