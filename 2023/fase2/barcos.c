#include <stdio.h>

typedef struct {
  int ilha1, ilha2, pessoas;
} barco;

typedef struct {
  int ilha_origem, ilha_destino;
} consulta;

int main(void){
  int n, b; scanf("%d %d", &n, &b);
  barco barcos[b];
  for(int i = 0; i < b; i++)
    scanf("%d %d %d",&barcos.ilha1[i], &barcos.ilha2[i], &barcos.pessoas[i]);
  int c; scanf("%d", &c);
  consulta consultas[c];
  for(int i = 0; i < c; i++)
    scanf("%d %d",&consultas.ilha_origem[i], &consultas.ilha_destino[i]);

  for(int i=0;i<c;i++){
    int pessoas_menor_barco = n;
  }
  
  return 0;
}
