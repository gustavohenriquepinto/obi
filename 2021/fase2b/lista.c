#include <stdio.h>

int lista_palindroma(int x[], int n){
    for(int i=0;i<n;i++)
        if(x[i]!=x[n-1-i])
            return 0;
    return 1;
}
int main(void){
    int n;scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++)
        scanf("%d",&x[i]);

    if(lista_palindroma(x,n)){
        putchar('0');return 0;
    }

        int y[n]; for(int j=0;j<n;j++) y[j]=x[j];
    
    for(int i=0;i<n-1;i++){
        
        for(int j=0)

    }
    return 0;
}