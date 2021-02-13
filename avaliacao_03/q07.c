#include <stdio.h>

int main(){
  int n[10];
  int numero = 0;
  for (int i = 0; i<10; i++){
    scanf("%i", &numero);
    n[i] = numero;
  }
  int maior = n[0];
  int indice = 0;
  for(int x = 0; x < 10; x++){
    if(n[x] > maior){
      maior = n[x];
      indice = x;
    }
  }

  printf("numero:%i \n", numero);
  printf("indice:%i \n", indice);



}