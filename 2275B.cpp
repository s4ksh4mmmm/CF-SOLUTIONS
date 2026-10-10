#include <bits/stdc++.h>
using namespace std;

string print(string s, int n) {
    vector<int> memory;   // CHANGED: was string
    vector<int> rem;      // CHANGED: was string
    int c = 1;

    for (int i = 0; i < n; i++) {
        char ch = s[i];
        if (ch == '1') {
            memory.push_back(c);
            c++;
        }
        else if (ch == '2') {
            if (!memory.empty()) {
                memory.pop_back();      // removes the whole number
                rem.push_back(c);
            }
            c++;
        }
        else {
            c++;
        }
    }

    vector<int> fin = rem;
    fin.insert(fin.end(), memory.begin(), memory.end());
    sort(fin.begin(), fin.end());       // sorts numerically

    string out = to_string(fin.size()) + "\n";
    for (int x : fin) out += to_string(x) + " ";
    return out;
}


int main() {
   int t,n;
   cin>>t;
   string s;
   
   vector<string> farr(t);
    
    for(int i=0;i<t;i++){
        cin>>n;
       cin>>s;
       
    farr[i]=print(s,n);
}
for(int i=0;i<t;i++){
        cout<<farr[i]<<endl;
    }

}