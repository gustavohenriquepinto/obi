#include <stdio.h>

int main(void){
    int n,d,a;scanf("%d %d %d",&n,&d,&a);
    int x=0;

    while(d!=a){
        x++;a++;
        if(a>n)a=1;
    }
    printf("%d",x);
    return 0;
}