#include <bits/stdc++.h>
using namespace std;
int ahead(int a,int b,int c,int d){
    int cp=0;

    if(b>a){
        cp++;
    }
    if(c>a){
        cp++;
    }
    if(d>a){
        cp++;
    }
    return cp;

}
int main(){
    int t;
    cin>>t;
    int arr[t];
    int w,x,y,z;
    for(int i=0;i<t;i++){
        cin>>w;
        cin>>x;
        cin>>y;
        cin>>z;
        arr[i]=ahead(w,x,y,z);
    }
    for(int i=0;i<t;i++){
        
        cout<<arr[i]<<endl;
    }
    return 0;
}