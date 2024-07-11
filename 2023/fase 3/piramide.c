#include <stdio.h>

int main(void) {
    int v[6],s=0;

    for(int i=0;i<6;i++){
        scanf("%d", &v[i]);
        s+=v[i];
    }

    for(int i=0;i<5;i++)
        for(int j=0;j<5-i;j++)
            if(v[i]>v[i+1]){
                int aux=v[i];
                v[i]=v[i+1];
                v[i+1]=aux;
            }

    int c1=s%3==0&&v[5]==s/3;
    int c2=0;
    for(int i = 0; i < 5; i++)
        for(int j = i + 1; j < 5; j++)
            if(v[i] + v[j] == v[5])
                c2=1;

    putchar(c1&&c2?'S':'N');

    return 0;
}