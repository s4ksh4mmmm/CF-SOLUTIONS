#include <bits/stdc++.h>
using namespace std;
string strongest(int x,int y,int z){
string str;
    if(x+y>=10){
        str="YES";
    }
    else if(z+y>=10){
        str="YES";  
      }
    else if(x+z>=10){
           str="YES";  
          }
    else{
        str="NO";
    }
    return str;
}
int main(){
    int n;
    cin>> n;
    string arr[n];
    int a,b,c;
    for(int i=0;i<n;i++){
        cin>>a;
        cin>>b;
        cin>>c;
        arr[i]=strongest(a,b,c);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

    }