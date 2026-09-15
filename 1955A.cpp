
#include <bits/stdc++.h>
using namespace std;

int sale(int n,int a,int b){
    int min;
  if(n%2==0){
   int mina=n*a;
    int minb=(n/2)*b;
    if(mina<=minb){
        min=mina;
    }
    else{
        min=minb;
    }
  }
  else{
    int mina=n*a;
    int minb=((n/2)*b)+((n%2)*a);
    if(mina<=minb){
        min=mina;
    }
    else{
        min=minb;
    }
  }
return min;
}

int main()
{
    int t,n,a,b;
    cin >> t;
    int farr[t];
    for(int i = 0; i < t; i++){
        cin >> n;
        cin >> a;
        cin >> b;
        farr[i]=sale(n,a,b);
    }
    for(int j = 0; j < t; j++){
        cout << farr[j] << endl;
    }
    return 0;
}
