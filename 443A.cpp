#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int l=s.length();
    int c=0;//to count total letters
    int dl;// to count distinct letters
    if(l==2){
        dl=0;
    }
    else{
    for(int i=0;i<l;i++) //loop to count total letters except the brackets and commas
    { 
        char ch=s[i]; 
            if(ch!='{' && ch!='}' && ch!=',' && ch!=' '){
                c++;    
                }
            }

            char arr[c];
           int k=0;
            for(int i=0;i<l;i++){// loop to collect all letters in a array
              char ch=s[i];
                  if(ch!='{' && ch!='}' && ch!=',' && ch!=' '){
                    arr[k]=ch;
                    k++;
                  }
            }
            
            char narr[c];
         for(int i=0;i<c;i++){//loop to collect distinct letters
             for(int j=i;j<c;j++){
                if(arr[j]==arr[i] && j>i){
                     narr[j]='*';
                }
                if(arr[j]==arr[i] && j==i){
                    narr[j]=arr[j];
                }
             }  
         }
         for(int i=0;i<c;i++){//loop to calculate distinct letters
            if(narr[i]!='*'){
                dl++;
            }
         }

        }

         cout<< dl;
         return 0;

         }
        

    
