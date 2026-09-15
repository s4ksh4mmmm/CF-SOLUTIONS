//kind of wrong code neeed to be fixed for hidden cases
#include <bits/stdc++.h>
using namespace std;

int legs(int x){
    int count;
       int cow=0;
       int chicken=0;
       while(x!=0){
       if(x>=4){
        cow++;
           x=x-4;
       }
       else{
        chicken++;
        x=x-2;
       }
    }
       count=cow+chicken;
          return count;
}

int main()
{
    int t;
    cin >> t;
    int n;
    int farr[t];
    for(int i = 0; i < t; i++){
        cin >> n;
        farr[i]=legs(n);
    }
    for(int j = 0; j < t; j++){
        cout << farr[j] << endl;
    }
    return 0;
}
