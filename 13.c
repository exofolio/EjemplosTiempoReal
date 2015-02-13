/*Sea J={J1,J2} un conjunto de tareas concurrentes hace un programa en c tal que
 * J1 es padre de j2
 * j1 pide un valor de corriente y voltaje del teclado
 * j1 caulcula e imprime resistencia
 * j2 calcula e imprime potencia
 */
#include <stdio.h>
#include <sys/types.h>
void main(void)
{
  int pid,v,i;
  float r,p;
  printf("Introduzca valor de voltaje:");
  scanf("%d",&v);
  printf("Introduzca valor de corriente:");
  scanf("%d",&i);
  r=(float)v/i;
  printf("Resistencia igual a : %f\n",r);
  pid=fork();
  if(!pid)
  {
  p=(float)v*i;
  printf("Potencia igual a : %f\n",p);
  }
}