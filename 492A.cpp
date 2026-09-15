#include <bits/stdc++.h>
using namespace std;

int cubes(int x){
    int count=0;
    for(int i=1;i<=x;i++){
        count=count+i;
    }
    return count;
}

int main()
{
    int n;
    cin>>n;
    int j=1;
    int c=0;
    int row=cubes(j);
    while(n>=row){
        c++;
        j=j+1;
        row=cubes(j);
        n=n-cubes(j-1);
    }
    cout<<c;
    return 0;
}
