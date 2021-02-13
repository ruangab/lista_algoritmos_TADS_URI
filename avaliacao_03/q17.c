#include <stdio.h>

int main(){
  int n[7];
  int numero = 0;
  for (int i = 0; i<10; i++){
    scanf("%i", &numero);
    n[i] = numero;
  }
  int maior = n[0];
  int menor = n[0];
  int indice = 0;
  for(int x = 0; x < 7; x++){
    if(n[x] > maior){
      maior = n[x];
    }
    if(n[x] < menor){
      menor = n[x];
    }
  }

  int diferenca = maior - menor;
  printf("diferenca:%i \n", diferenca);



(1,5,6,7,3,8,6,8)

(1,3,5,6,7,8,8)

 {8, 9, 1, 7, 8, 17, 3},


(1,3,7,8,8,9,17)


}