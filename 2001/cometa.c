#include <stdio.h>

int main(void){
  int x;scanf("%d",&x);
  int k=1986;

  while(k <= x)k+=76;
  printf("%d",k);

  return 0;
}
