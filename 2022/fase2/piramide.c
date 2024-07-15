#include <stdio.h>

int main(void){

    int d;scanf("%d",&d);

    for(int i=0;i<d;i++){
        for(int j=0;j<d;j++){
            int x = 1, y = 1;
            for(int ix=i,jx=j;ix>0&&jx>0;ix--,jx--)
                x++;
            for(int ix=i,jx=j;ix<d-1&&jx<d-1;ix++,jx++)
                y++;

            printf("%d ",x<y?x:y);
        }
        putchar('\n');
    }

    return 0;
}