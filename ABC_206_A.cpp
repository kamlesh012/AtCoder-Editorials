#include <iostream>
#include<math.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  float f=n*1.08;
  f=floor(f);
  if(f<206)cout<<"Yay!"<<endl;
  else if(f==206)cout<<"so-so"<<endl;
  else cout<<":("<<endl;
  
  return 0;
}
