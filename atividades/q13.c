#include <stdio.h>

int main(){
  for(int i = 1; i <= 200; i++){
    if((i%5==0)||(i%3==0)){
      printf("%i\n", i);
    }
  }
}