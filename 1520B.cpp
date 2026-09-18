//tle code
#include <bits/stdc++.h>
using namespace std;
bool ordinary(int x) {
  bool result;int c=0;int d=x%10;
  for(int i=x;i!=0;i=i/10){
    c=(c*10)+d;
  }
  if(c==x){
    result=true;
  }
  else{
    result=false;
  }
return result;

}

int main() {
    int n,t;
    cin >> t;
    int farr[t];
    for(int i=0;i<t;i++){
        cin>>n;
        int c=0;
        for(int j=1;j<=n;j++){
        if(ordinary(j)==true){
            c++;
        }
    }
      farr[i]=c;
    }
    for(int i=0;i<t;i++){
        cout<<farr[i]<<endl;
    }
    return 0;
}