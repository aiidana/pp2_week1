#include <iostream>

using namespace std;

int main(){
   string s;
   cin >> s;
   int sum=0;

   for(int i=0; i<s.size(); i++){
    sum+=s[i];
    sum =sum-48;

   }
   
   cout << sum;



}