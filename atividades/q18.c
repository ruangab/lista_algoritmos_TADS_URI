#include <stdio.h>

int main(){
  int base, exp, result = 1;
  scanf("%i%i", &base, &exp);
  for(int i = 1; i <= exp; i++){
    result = result * base;
  }
  printf("%i", result);
}