#include <bits/stdc++.h>
using namespace std;
int main(){ 
  
  string s;
  cin>>s;
  int l=s.length();
  sort(s.begin(),s.end());
  
  if((s[0]=='A') && (s[l-1]=='B'))cout<<"Yes";
  else cout<<"No";
  
  return 0;
 
 
}
