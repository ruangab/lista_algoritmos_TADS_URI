#include <stdio.h>

int main(){
  int a = 1;
  int b = 1;
  int div, som = 0;
  for(int i = 1; i < 50; i++){
    div = a/b;
    som += div;
    a += 2;
    b += 1;
  }
  printf("%i", som);
}