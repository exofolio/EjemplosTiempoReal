/* Sea J = {J1 J2 J3}
 * Un conjunto de tareas concurrentes 
 * hacer un programa en c tal que:
 * a) J2 imprime en un ciclo infinito si PID
 * b) J3 imprima en un ciclo infinitu su PPID
 * c) J1 crea a J2 y J3
 * 
 */

#include <stdio.h>
#include <sys/types.h>
int main()
{
  if(fork()==0)
  {
    while(1)
    {
      printf("Mi pid es:\t %d",getpid());
    }
  }
  if(fork()==0)
  {
    while(1)
    {
      printf("Mi pid es:\t %d",getppid());
    }
  }
}