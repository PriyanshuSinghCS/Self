#include <stdio.h>

int main(){
   int Centigrade;
   printf("Enter value of temperature in Centigrade:\n");
   scanf("%d", &Centigrade);
   printf("Value of temperature in Fahrenheit = %f", Centigrade*(9.0/5.0)+32);
   return 0;
}