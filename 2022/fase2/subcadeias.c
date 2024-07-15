#include <stdio.h>

int palindromo(char s[],int x,int y){
    for(int i=x;i<=y;i++)
        if(s[i]!=s[y+x-i])
            return 0;
    return 1;
}

int main(void){
    int n,m=1;scanf("%d",&n);
    char s[n];scanf("%s",s);

    for(int i=0;i<n;i++){
        int r=n-i-1;
        for(int j=n-1;j>i;j--){
            if(palindromo(s,i,j))break;
            r--;
        }
        if(m<r)m=r;
    }

    printf("%d",m);

    return 0;
}
