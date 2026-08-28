#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<< "enter limit ";
    cin>> n;
 int c=1;
    
    for(int i=1;i<=(2*n-1);i++){
        if(i<=n){ //upper part
         for(int j=i;j<=n;j++){
            if(n>j){//space before stars
                cout<< " ";
            }
         }int h=i;
         
         if (h==1){
             cout<< "*"<<"\n";
         }
        else if(h!=1 && h<=n){
         for(int v=1;v<=(2*h-1);v++){
            if(v>1 && v<(2*h-1)){
                cout<< " ";//space between stars
            }
            else{
                cout<< "*";
            }
        }
        cout<< "\n";
        }
    }   
    else if(i>n){//lower part
       
         for(int j=i;j>=n;j--){
            if(n<j){
                cout<< " ";//space before stars
            }
        }
            int h=(i-(2*c));
         if (h==1){
             cout<< "*"<<"\n";
         }
        else if(h!=1 && h<=n){
         for(int v=1;v<=(2*h-1);v++){
            if(v>1 && v<(2*h-1)){
                cout<< " ";//space between stars
            }
            else{
                cout<< "*";
            }}
          cout<< "\n";  

          
        }
        c=c+1;

    }
    }
    return 0;
}
