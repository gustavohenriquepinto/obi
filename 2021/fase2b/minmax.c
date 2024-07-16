#include <stdio.h>

int main(void){
    int s,a,b;scanf("%d %d %d",&s,&a,&b);

    int m,n;
    for(int i=a;i<=b;i++){
        int x=0,y=i;
        while(y) {x+=y%10;y/=10;}
        if(x==s){m=i;break;}
    }
    for(int i=b;i>=a;i--){
        int x=0,y=i;
        while(y) {x+=y%10;y/=10;}
        if(x==s){n=i;break;}
    }
    printf("%d\n%d",m,n);
    

    return 0;
}