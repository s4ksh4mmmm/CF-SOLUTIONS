
#include <bits/stdc++.h>
using namespace std;


int card(int a,int b,int c,int d) {
   int ar[4]={a,b,c,d};
   int count=0;
   int sun=0;
   int sla=0;
   int draw=0;
   if(ar[0]>ar[3]){
     sun++;
        if(ar[1]>ar[2]){
            sun++;
        }
        else if(ar[1]==ar[2]){
            draw++;
        }
        else{
            sla++;
        }
     if(sun>sla){
        count=count+2;
        sun=0;
        sla=0;
        draw=0;
     }
     else{
        sun=0;
        sla=0;
        draw=0;
     }
   }


   if(ar[0]==ar[3]){
    
        if(ar[1]>ar[2]){
            sun++;
        }
        else if(ar[1]==ar[2]){
            draw++;
        }
        else{
            sla++;
        }
     if(sun>sla){
        count=count+2;
        sun=0;
        sla=0;
        draw=0;
     }
     else{
        sun=0;
        sla=0;
        draw=0;
     }
   }

   if(ar[0]>ar[2]){
     sun++;
        if(ar[1]>ar[3]){
            sun++;
        }
        else if(ar[1]==ar[3]){
            draw++;
        }
        else{
            sla++;
        }
     if(sun>sla){
        count=count+2;
        sun=0;
        sla=0;
        draw=0;
     }
     else{
        sun=0;
        sla=0;
        draw=0;
     }
   }

   if(ar[0]==ar[2]){
     
        if(ar[1]>ar[3]){
            sun++;
        }
        else if(ar[1]==ar[3]){
            draw++;
        }
        else{
            sla++;
        }
     if(sun>sla){
        count=count+2;
        sun=0;
        sla=0;
        draw=0;
     }
     else{
        sun=0;
        sla=0;
        draw=0;
     }
   }


   return count;
}


  
int main() {
    int t,a,b,c,d;
    cin >> t;
   int farr[t];
    for(int i=0;i<t;i++){
       cin>>a;
       cin>>b;
       cin>>c;
       cin>>d;
       
      farr[i]=card(a,b,c,d);
    }
    for(int i=0;i<t;i++){
        cout<<farr[i]<<endl;
    }
    return 0;
}