#include <bits/stdc++.h>
using namespace std;
string spn(int x,int y,int z){
string ans;
if(z>y && y>x){
    ans="STAIR";
}
else if(y>z && y>x){
ans="PEAK";
}
else{
    ans="NONE";
}
return ans;
}
int main(){
    int t;
    cin>>t;
    string arr[t];
    int a,b,c;

    for(int i=0;i<t;i++){
        cin>>a;
        cin>>b;
        cin>>c;
        arr[i]=spn(a,b,c);
    }
    for(int i=0;i<t;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}