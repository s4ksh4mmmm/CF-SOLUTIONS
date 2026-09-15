
#include <bits/stdc++.h>
using namespace std;

int onedigit(int n){
   int min=INT_MAX;
   
   for(int i=n;i!=0;i=i/10){
    int d=i%10;
    if(d<min){
        min=d;
    }
   }
return min;
}

int main()
{
    int t,n;
    cin >> t;
    int farr[t];
    for(int i = 0; i < t; i++){
        cin >> n;
        farr[i]=onedigit(n);
    }
    for(int j = 0; j < t; j++){
        cout << farr[j] << endl;
    }
    return 0;
}
