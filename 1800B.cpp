#include <bits/stdc++.h>
using namespace std;
int pairs(string s,int n,int k) {
 
    int burles=0;
    int lc=0;
    int uc=0;
    int index=0;
 char CH='A';char ch='a';
    while(CH<='Z'){

        while(ch<='z'){
            if(index<n){
            if(s[index]==CH){
                uc++;
            }
            if(s[index]==ch){
                lc++;
            }
            index++;
        }
        else{
            if(lc==uc){
                burles= burles+lc;
            }
            else if( lc>uc && uc!=0){
                burles=burles+uc;
                lc=lc-uc;
                uc=0;
                if(lc/2>0 && k>0){
                   if(k<=(lc/2)){
                    burles+=k;
                    k=0;
                   }
                   else{
                    burles+=lc/2;
                    k=k-lc/2;
                   }
                }

            }
             else if( uc>lc && lc!=0){
                burles=burles+lc;
                uc=uc-lc;
                lc=0;
                if(uc/2>0 && k>0){
                   if(k<=(uc/2)){
                    burles+=k;
                    k=0;
                   }
                   else{
                    burles+=uc/2;
                    k=k-uc/2;
                   }
                }

            }
            else if(lc==0 && uc!=0){
              if(uc/2>0 && k>0){
                   if(k<=(uc/2)){
                    burles+=k;
                    k=0;
                   }
                   else{
                    burles+=uc/2;
                    k=k-uc/2;
                   }
                }

            }
            else{
                      if(lc/2>0 && k>0){
                   if(k<=(lc/2)){
                    burles+=k;
                    k=0;
                   }
                   else{
                    burles+=lc/2;
                    k=k-lc/2;
                   }
                }
            }
            ch++;
            CH++;
            index=0;
            lc=0;
            uc=0;
        }
        }
    }
    return burles;
}


int main() {
   int t,n,k;
   cin>>t;
   string s;
   
   vector<int> farr(t);
    
    for(int i=0;i<t;i++){
        cin>>n;
      cin>>k;
       cin>>s;
    farr[i]=pairs(s,n,k);
}
for(int i=0;i<t;i++){
        cout<<farr[i]<<endl;
    }

}