#include <bits/stdc++.h>
using namespace std;
int maxterm(int x, int y,int z){
    if(x>y){
        if(x>z){
            return x;
        }
        else {
            return z;
        }
    }
    else{
        if(y>z){
            return y;
        }
        else {
            return z;
        }
    }

}
int minterm(int x, int y,int z){
    if(x<y){
        if(x<z){
            return x;
        }
        else {
            return z;
        }
    }
    else{
        if(y<z){
            return y;
        }
        else {
            return z;
        }
    }

}
int medium(int x, int y,int z){
      int M=maxterm(x,y,z);
      int m=minterm(x,y,z);
      int med=(x+y+z)-(M+m);
      return med;
}
int main(){
    int n;
    cin>>n;
     int a;
     int b;
     int c;
    int narr[n];
    for(int i=0;i<n;i++){
             cin>>a;
             cin>>b;
             cin>>c;
           narr[i]=medium(a,b,c);
}
for(int i=0;i<n;i++){
cout<<narr[i]<<endl;
}
return 0;
}

