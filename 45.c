/* Ejemplo 42, Sea J= j1,j2
 * Hacer un programa tal que:
 * a) J1 es padre de J2
 * b) J1 crea a J2 y J1 entra en un ciclo infinito imprimiendo su PID
 * c) J2 cuenta del 1 al 100 y despues termina a su padre
 * Raise:
 * Sintaxis int raise(int sig)
 **/
#include <sys/types.h>
#include <stdio.h>
#include <signal.h>
void main()
{
  int i;
    for(i=0;i<1000;i++)
    {
	printf("PID:%d\n",getpid());
    }
    raise(SIGKILL);
}