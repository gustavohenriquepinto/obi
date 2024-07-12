#include <stdio.h>

int main(void){
    int n;scanf("%d",&n);
    int x[n];

    for(int i=0;i<n;i++)
        scanf("%d",&x[i]);

    for(int i=0;i<n;i++){
        int a[n-i]; a[0]=x[i];
        int b=0;
        for(int j=1;j<n-i;j++){
            a[j]=x[i+j];
            int c=0;
        }
    }

    return 0;
}