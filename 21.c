/* Ejemplo 21 Hacer una funcion en C tal que cuando esta sea invocada cree 
* un nuevo proceso hijo que imprima en pantalla "Hola", su PID y el de su padre
*/
#include <stdio.h>
#include <sys/types.h>
void imprimirpids(void);
void main(void)
{
  imprimirpids();
}
void imprimirpids(void)
{
  if(!fork())
  {
  printf("Hola mi pid es %d y mi ppid es %d\n",getpid(),getppid());
  }
}

