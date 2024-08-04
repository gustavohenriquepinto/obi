#include <iostream>
using namespace std;

int main(){
  int n,x=0;cin>>n;
  int e[n],d[n];char c[n];
  for(int i=0;i<n;i++){
    cin>>e[i];cin>>c[i];cin>>d[i];
  }

  for(int i=0;i<n;i++){
    bool cond=true;
    for(int j=0;j<n;j++){
      if(e[i]==d[j]){cond=false;break;}
    }
    x=i; if(cond)break;
  }
  
  for(int i=0;i<n;i++){
    cout<<c[x];
    for(int j=0;j<n;j++)
      if(e[j]==d[x]){x=j;break;}
  }
  cout<<endl;
  
  return 0;
}
