#include <stdio.h>

int main(void) {
    int e,m,d;scanf("%d %d %d",&e,&m,&d);
    int x[m],y[m],u[d],v[d];
    int a[e/3],b[e/3],c[e/3];
    int r=0;

    for(int i=0;i<m;i++)
        scanf("%d %d",&x[i],&y[i]);

    for(int i=0;i<d;i++)
        scanf("%d %d",&u[i],&v[i]);

    for(int i=0;i<e/3;i++)
        scanf("%d %d %d",&a[i],&b[i],&c[i]);

    
    for(int i=0;i<e/3;i++){
        for(int j=0;j<d;j++){
            if((a[i]==u[j]&&b[i]==v[j])||(a[i]==v[j]&&b[i]==u[j]))r++;
            if((a[i]==u[j]&&c[i]==v[j])||(a[i]==v[j]&&c[i]==u[j]))r++;
            if((b[i]==u[j]&&c[i]==v[j])||(b[i]==v[j]&&c[i]==u[j]))r++;
        }

        for(int j=0;j<m;j++){
            if((a[i]==x[j]&&b[i]!=y[j]&&c[i]!=y[j]))r++;
            if((b[i]==x[j]&&a[i]!=y[j]&&c[i]!=y[j]))r++;
            if((c[i]==x[j]&&b[i]!=y[j]&&a[i]!=y[j]))r++;
        }
    }

    printf("%d",r);
    return 0;
}