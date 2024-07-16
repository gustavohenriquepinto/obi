#include <stdio.h>

// int fat(int x){
// 	for(int i=x-1;i>1;i++)
// 		x*=i;
// 	return x==0?1:x;
// }
// int comb(int n,int p){
// 	return fat(n)/(fat(n-p)*fat(p));
// }

int main(void){
  int n,m;scanf("%d %d",&n,&m);
  int x[m],y[m];
  for(int i=0;i<m;i++)
    scanf("%d %d",&x[i],&y[i]);

	int r=1;
	for(int i=n;i>1;i--)
		r*=2;
    
		

        
 
}