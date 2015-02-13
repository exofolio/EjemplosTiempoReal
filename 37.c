/* Generar 100 valores de ruido pseudoaleatoro entre -0.5 y 0.5 usando rand()
 * 
 * rand()
 * Sintaxis: #include <stdlib.h>
 * int rand(void);
 * Descripción: rand() genera un número pseudoaleatoro en el rango de 0 a RAND_MAX
 * con una distribución rectangular
 * Devuelve: Un número pseudoaleatoro
 */
#include <stdio.h>
#include <stdlib.h>
void main()
{
  float a;
  int i;
  for(i=0;i<100;i++)
  {  
  a=rand();
  while(a>5 || a<-5)
  {
    a=a/2-0.5;
  }
  printf("Valor: %f\n",a); 
  }
  printf("RandMAX %d",rand());
  printf("----------------------------------");
  int n[2]={1,-1};
  float v;
  for(i=0;i<50;i++)
  {
    v=(float)(rand()%51)*(n[rand()%2])/100;
    printf("%f\n",v);
  }
}
