#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<pair<int,int> > vt;
    // map<int,int> mp;
    for(int i =0; i<n; i++){
        int a , b;
        cin >> a >> b;
        pair<int , int> pr;
        pr.first = a+b;
        pr.second = i+1;
        vt.push_back(pr);

    }
    sort(vt.begin(), vt.end());
    
    for(int i=0; i<vt.size(); i++){
       cout << vt[i].second << " ";
    }
   
}

