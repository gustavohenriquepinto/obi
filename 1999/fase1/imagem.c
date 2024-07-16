#include <stdio.h>

int main(void){
    int m,n;scanf("%d %d",&n,&m);
    int x[m][n];
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&x[i][j]);

    

    return 0;
}