#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    bool flag=true;
    for(int i=0; i<s.size()/2;i++){
       if(s[i] != s[s.size()-1-i]){
        flag=false;
        break;
       }
    }
    if(flag){
        cout << "Yes";
    }else cout << "No";
}