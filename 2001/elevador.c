#include <stdio.h>

int main(void){
  int n,c;scanf("%d %d",&n,&c);
  int x=0;
  for(int i=0;i<n;i++){
    int s,e;
    scanf("%d %d",&s,&e);
    x+=e;x-=s;
    if(x>c){putchar('S');return 0;}
  }

  putchar('N');
  
  return 0;
}
