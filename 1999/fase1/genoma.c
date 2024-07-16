#include <stdio.h>
//Deveria ser gerado um arquivo de saída, mas utilizarei o terminal apenas

char comp(char c){
    switch (c){
    case 'A': return 'T';
    case 'T': return 'A';
    case 'C': return 'G';
    case 'G': return 'C';
    }
    return 0;
}

int main(void){
    int m,n;scanf("%d %d",&n,&m);
    char t[n],p[m];scanf("%s %s",p,t);
    
    for(int i=0;i<n;i++){
        int cond=1;
        for(int j=0;j<m;j++){
            printf("%c %c",t[i+j],p[j]);
            if(t[i+j]!=p[j]){cond=0;break;}
        }
        if(cond)printf("%d ",i+1);
    }
    putchar('\n');
    for(int i=0;i<n;i++){
        int cond=1;
        for(int j=0;j<m;j++){
            if(t[i+j]!=comp(p[m-j-1])){cond=0;break;}
        }
        if(cond)printf("%d ",i+1);
    }
    putchar('\n');
    
    return 0;
}