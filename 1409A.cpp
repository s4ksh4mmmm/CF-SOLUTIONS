#include <bits/stdc++.h>
using namespace std;
int minmoves(int x,int y){
int k=10;
int m=0;
if(x==y){
    m=0;
}
if(x>y){
while(x!=y){
    if((y+k)<=x && k>=1){
        m++;
        y=y+k;
    }
    if((y+k)>x && k>=1){
        k=k-1;
    }
}
return m;
}
if(x<y){

    while(x!=y){
    if((x+k)<=y && k>=1){
        m++;
        x=x+k;
    }
    if((x+k)>y && k>=1){
        k=k-1;
    }
}
}
return m;
}


int main(){
int n;
cin>>n;
int arr[n];
int a;
int b;
for(int i=0;i<n;i++){
    cin>>a;
    cin>>b;
    arr[i]=minmoves(a,b);
}
for(int i=0;i<n;i++){
    
    cout<< arr[i]<<endl;
}
return 0;
}