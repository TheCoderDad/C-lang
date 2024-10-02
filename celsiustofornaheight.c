#include <stdio.h>

int main(void){
 float c,f;
  printf("enter the celsius tempeture: ");
  scanf("%f",&c);
  f=((9.0/5.0)*c)+32;
  printf("the value of fahrenhit is %f",f);
  return 0;
}