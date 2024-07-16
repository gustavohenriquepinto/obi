#include <stdio.h>

int main(void){
  int v[4];for(int i=0;i<4;i++)scanf("%d",&v[i]);
  for(int i=0;i<3;i++)
    for(int j=0;j<3-i;j++)
      if(v[i]>v[i+1]){
	int x=v[i];v[i]=v[i+1];v[i+1]=x;
      }

  int k=v[0]+v[3]-v[2]-v[1];
  printf("%d",k>=0?k:-k);
  
  return 0;
}
