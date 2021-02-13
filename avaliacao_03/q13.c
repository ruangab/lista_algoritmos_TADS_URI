#include <stdio.h>

int main(){
  int n[20];
  int numero = 0;
  for (int i = 0; i<10; i++){
    scanf("%i", &numero);
    n[i] = numero;
  }
  int maior = n[0];
  int menor = n[0];
  int indice = 0;
  for(int x = 0; x < 20; x++){
    if(n[x] > maior){
      maior = n[x];
    }
    if(n[x] < menor){
      menor = n[x];
    }
  }

  int diferenca = maior - menor;
  printf("diferenca:%i \n", diferenca);



}