#include <stdio.h>

int main(void) {
    int n,m,x,r;
    char p[1000],s[1000];

    scanf("%d",&n);
    scanf("%s",p);
    scanf("%d",&m);
    scanf("%s",s);

    x=n>m?m:n;
    for(int i=0;i<x;i++){
        if(p[i]!=s[i]||i==x-1)break;
        r++;
    }
    
    printf("%d",r);

    return 0;
}