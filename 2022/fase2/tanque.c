#include <stdio.h>

int main(void){
    int c,d,t;scanf("%d %d %d",&c,&d,&t);
    float g= (float)d/c-t;
    if(g<=0)printf("0.0");
    else printf("%.1f",g);
    return 0;
}