#include <bits/stdc++.h>
using namespace std;
int polyhedrons(string ar[],int size) {
  int result=0;
  for(int i=0;i<size;i++){
    if(ar[i]=="Tetrahedron"){
     result=result+4;
    }
    if(ar[i]=="Cube"){
        result=result+6;
    }
    if(ar[i]=="Octahedron"){
        result=result+8;
    }
    if(ar[i]=="Dodecahedron" ){
        result=result+12;
    }
    if(ar[i]=="Icosahedron"){
        result=result+20;
    }
  }
return result;
}

int main() {
    int t;
    cin>>t;
    string arr[t];
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
    
        cout<<polyhedrons(arr,t)<<endl;
    
    return 0;
}