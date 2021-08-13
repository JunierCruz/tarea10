
#include <stdio.h>
#include <math.h>
void main()
{
 int numero;
 printf("Introduzca el numero: \n");
 scanf("%i", &numero);
 if(numero == 15)   
    printf("Quince");
 else{
     int res =  pow(numero, 3);
      printf("Resultado: %i", res );
 }
   
}
