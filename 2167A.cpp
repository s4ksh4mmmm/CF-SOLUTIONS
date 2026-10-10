#include <bits/stdc++.h>
using namespace std;



string Count(int a,int b,int c,int d){
     if(a==b && b==c && c==d ){
        return "YES";
     }
     else{
        return "NO";
     }
}


int main(){
    int t,a,b,c,d;
    cin>>t;
   vector<string> arr(t);
    
    for(int i=0;i<t;i++){
        cin>>a;
        cin>>b;
        cin>>c;
        cin>>d;
        arr[i]=Count(a,b,c,d);
    }
    for(int i=0;i<t;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}