#include <iostream>

using namespace std;

int main(){
   
    int n=3;
    
    
        for(int i=1;i<=(2*n);i++){
          if(i<=n){   
          for(int j=1;j<=(2*n);j++){
            
            if(j<=i)
            {
              cout<<"*";
            }
            if (i<j<=(2*n-i) && i!=(2*n-i))
            {
               cout<< " ";
            }
            if (j>(2*n-i)) 
           {
            cout<< "*";
           }
          }
          cout<< "\n";
        }
        else{

        }
        
      }
      return 0;
    }
