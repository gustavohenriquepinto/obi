#include <stdio.h>

int sequal(char s[2],char r[2]){
  if(s[0]==r[0]&&s[1]==r[1])return 1;
  return 0;
}

int main(void){
  int l,c;scanf("%d %d",&l,&c);
  typedef struct{char s[2],int x=0}str;
  str m[l][c];
  int cx[l],lx[c];

  for(int i=0;i<l;i++){
    for(int j=0;j<c;j++)
      scanf("%s",m[i][j].s);
    m[i][j].x=0; 
  }

  char listr[l*c][2];int listam=0;
  char lisx[l*c][2];int tamx=0;
  for(int i=0;i<l;i++){
    for(int j=0;j<c;j++){
      int cond=1;
      for(in k=0;k<listam;k++)
	if(sequal(listr[k], m[i][j].s))
	  {cond=0;break;}
      if(cond){listr[listam++]=m[i][j].s;lisx[tamx++]=m[i][j].s;}
    }
  }

  lisx

  
  
  return 0;
}