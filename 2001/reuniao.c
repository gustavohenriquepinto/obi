#include <stdio.h>
int main(){
  int n,m;scanf("%d %d",&n,&m);
  int x[m][m];
  for(int i=0;i<m;i++){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    x[a][b]=c;x[b][a]=c;
  }

  
    
  
  
  return 0;
}