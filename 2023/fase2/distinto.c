#include <stdio.h>

int main(void){
    int n;scanf("%d",&n);
    int x[n], m=0;

    for(int i=0;i<n;i++)
        scanf("%d",&x[i]);

    for(int i=0;i<n;i++){
      int y[n-i];
      int z=0;

      for(int j=0;j<n-i;j++){
	int a=0;

	for(int k=j-1;k>i;k--){
	  if(y[k]==y[j]){
	    a=1;break;
	  }
	}

	if(a==1)break;
	y[j]=x[i+j];
	z++;
      }
      
      if(z>m)m=z;
    }
    
    printf("%d\n",m);
    
    return 0;
}
