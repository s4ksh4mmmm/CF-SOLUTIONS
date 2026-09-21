
#include <bits/stdc++.h>
using namespace std;
int aose(int a,int b) {
int count;
if(a<b){
if((b-a)%2==1){
    count=1;
}
else{
    count =2;
}
}
else if(a>b){
if((a-b)%2==0){
    count=1;
}
else{
    count =2;
}
}
else{
    count=0;
}



return count;
}

int main() {
    int t,a,b;
    
    cin >> t;
     
    int farr[t];
    for(int i=0;i<t;i++){
       cin>>a; 
       cin>>b; 
      farr[i]=aose(a,b);
    }
    for(int i=0;i<t;i++){
        cout<<farr[i]<<endl;
    }
    return 0;
}