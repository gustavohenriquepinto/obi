#include <stdio.h>

typedef struct{
  int u, v, w;
}edge;

int main(void){
  int n,b;scanf("%d %d",&n,&b);
  int m[n][n]; edge elist[b*2];
  for(int i=0;i<n;i++){
    int f,g,h;scanf("%d %d %d",&f,&g,&h);
    m[f-1][g-1]=h;
    m[g-1][f-1]=h;
    elist[i]=(edge){f-1,g-1,h};
    elist[i]=(edge){g-1,f-1,h};
  }
  int c;scanf("%d",&c);
  int x[c],y[c];
  for(int i=0;i<c;i++){
    scanf("%d %d",&x[i],&y[i]);
    x[i]--;y[i]--;
  }

  for(int i=1;i<b*2;i++){
		for(int j=0;j<b*2-1;j++){
			if(elist[j].w<elist[j+1].w){
				edge temp=elist[j];
				elist[j]=elist[j+1];
				elist[j+1]=temp;
			}
    }
  }

  edge spanlist[n];int spant=0;
  int belongs[n];
  for(int i=0;i<n;i++)
    belongs[i]=i;

  for(int i=0;i<b*2;i++){
		int cno2=belongs[elist[i].v];
		int cno1=belongs[elist[i].u];
		
		if(cno1!=cno2){
			spanlist[spant++]=elist[i];
			for(int j=0;j<n;j++)
        if(belongs[i]==cno2)
          belongs[i]=cno1;
		}
	}



}