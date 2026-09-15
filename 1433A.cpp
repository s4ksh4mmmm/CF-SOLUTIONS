#include <bits/stdc++.h>
using namespace std;
int digits(int x){
int c=0;
for(int i=x;i!=0;i=i/10)
{
       c++;
}
return c;
}

int main(){
    int t,n;
    cin>>t;
    int arr[t];
  
    for(int i=0;i<t;i++){
        cin>>n;
        int count=0;
        for(int j=1;j<10;j++){
            int f=-1;
            for(int k=j;k<10000;k=((k*10)+j))
            {
            if( k==n){
              count=count+digits(k);
              f=1;
              break;
            }
            if(k!=n){
               count=count+digits(k); 
            }
            
        }
           if(f==1){
                break;
            }
        }
        arr[i]=count;
    }
    for(int i=0;i<t;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}