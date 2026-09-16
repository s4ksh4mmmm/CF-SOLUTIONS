
#include <bits/stdc++.h>
using namespace std;

int pgen(string x,int r){
    int ques=0;
    for(char ch='A';ch<='G';ch++){
        int count=0;
        for(int i=0;i<x.length();i++){
            if(x[i]==ch){
                count++;
            }
    }
    if(count<r){
        ques=ques+(r-count);
    }
    }

    return ques;
    
}

int main()
{
    int t,n,m;
    cin >> t;
    int farr[t];
    for(int i = 0; i < t; i++){
        cin>>n;
        cin>>m;
         string s;
         cin>>s;
        farr[i]=pgen(s,m);
    }
    for(int j = 0; j < t; j++){
        cout << farr[j] << endl;
    }
    return 0;
}