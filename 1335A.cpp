#include <bits/stdc++.h>
using namespace std;
int findpair(int x){
int c=0;
int a=max(x/2,(x-(x/2)));
int b=min(x/2,(x-(x/2)));

if(x>2){
    if(a==b){
   a=a+1;
   b=b-1;
}
    for(int i=b;i>=1;i--){
        c++;
        a=a+1;
    }

}
else {
    c=0;
}
return c;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<findpair(arr[i])<<endl;
    }
    
    return 0;
}