#include <iostream>

using namespace std;

int main(){
    cout<<"enter number of lines : ";
    int n;
    cin>> n;
    
     for(int i=1;i<=n;i++)
    {       
        for(int j=i;j<=n;j++)
        {
          if (n>j){
            cout<< "  ";
          }
        }int h=i;
        
            for(int v=1;v<=i;v++){
              cout<< v << " ";
            }
            if(h!=1){ 
            for(int t=(h-1); t>=1;t-- ){
              cout<< t << " ";
            }
          }
        cout<<"\n";
        }
         return 0;
      }
        

