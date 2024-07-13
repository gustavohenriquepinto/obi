#include <stdio.h>

int main(void){
    int n;scanf("%d",&n);
    int x[n], m=0;

    for(int i=0;i<n;i++)
        scanf("%d",&x[i]);

    for(int i=0;i<n;i++){
      int r = 1;
      for(int j=i+1;j<n;j++){
	int cond=0;
	if(x[i]==x[j])break;
	for(int k=j-1;k>=i;k--){
	  if(x[k]==x[j]){
	    cond=1;break;
	  }
	}
	if(cond)break;
	r++;
      }
      if(r>m)m=r;
    }
    
    printf("%d\n",m);
    
    return 0;
}
