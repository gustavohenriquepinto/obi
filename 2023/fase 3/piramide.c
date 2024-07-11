#include <stdio.h>

int main(void) {
    int v[6], m = 0, mi, i1=-1, i2=-1;  
    
    for(int i=0;i<6;i++){ 
        scanf("%d", &v[i]);
        if(v[i]>m) m=v[i], mi=i;
    }

    for(int i=0;i<6;i++){
        if(i==mi) continue;
        for(int j=0;j<6;j++){
            if(j==mi||j==i) continue;
            if(v[i]+v[j]==m){
                i1=i;i2=j; break;
            }
        }
    }

    if(i1==-1){
        putchar('N');
        return 0;
    }

    for(int i=0;i<6;i++){
        if(i==mi||i==i1||i==i2) continue;
        for(int j=0;j<6;j++){
            if(j==mi||j==i||j==i1||j==i2) continue;
            for(int k=0;k<6;k++){
                if(k==mi||k==i||k==j||k==i1||k==i2) continue;
                if(v[i]+v[j]+v[k]==m){
                    putchar('S');
                    return 0;
                }
            }
        }
    }

    putchar('N');

    return 0;
}