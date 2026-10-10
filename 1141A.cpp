#include <bits/stdc++.h>
using namespace std;
int game(int a,int b) {


if(a==b){
    return 0;
}
else if(b%a!=0){
    return -1;
}
else{
    int p=b/a;
    int twos=0;
    int threes=0;
    int f=-1;
    while(p!=1){
        if(p%2==0){
            twos++;
            p/=2;
        }
        else if(p%3==0){
            threes++;
            p/=3;
        }
        else{
            f=1;
            break;
        }
    }
    if(f==1){
        return -1;
    }
    else{
        return (twos+threes);
    }
}
   
}


int main() {
   int a,b;
    
    
        cin>>a;
       cin>>b;
       
    

        cout<<game(a,b)<<endl;
    
}