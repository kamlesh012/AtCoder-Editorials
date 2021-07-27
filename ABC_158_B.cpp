#include <bits/stdc++.h>
 
#define int long long
 
using namespace std;
 
int32_t main(){
 
  int n,a,b;
 
  cin>>n>>a>>b;
 
  if((!a) && (!b))cout<<0;
 
  else{
 
    int ans=0,k=n/(a+b);
 
    ans+=(a*k);
     int y=a+b;
     int x=(n%y);
 
    if(x){
 
      if(x<=a)ans+=x;
 
      else ans+=a;
 
      }
 
    cout<<ans;
 
    }
  return 0;
  }
