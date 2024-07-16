#include <stdio.h>

int palindromo(char s[],int n){
  for(int i=0;i<n/2+1;i++)
    if(s[i]!=s[n-1-i])
      return 0;
  return 1;
}

int main(void){
  int n,m=1;scanf("%d",&n);
  char s[n];scanf("%s",s);

  for(int i=0;i<n;i++){
    if(m+i>=n-1)break;
    int r=n-i;
    for(int j=n-1;j>i;j--){
      if(palindromo(&s[i],j-i+1))break;
      r--;
    }
    if(m<r)m=r;
  }

  printf("%d",m);
  
  return 0;
}
