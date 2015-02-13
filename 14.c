/* Sea J={J1,J2} hacer un programa en c tal que 
 * a) J1 es padre de J2
 * b)J1 imprime su pid y el de su hijo
 * c) J2 imprime su pid y el de su padre
 */
#include<stdio.h>
#include<sys/types.h>
void main(void)
{
  int pid;
  printf("Padre PID: %d\n",getpid());
  pid=fork();
  if(!pid)
  {
    printf("HIJO Padre PID: %d\n",getppid());
    printf("HIJO Hijo PID: %d\n",getpid());
    exit(NULL);
  }
  else
  {
    printf("PADRE Hijo PID: %d\n",pid);
    exit(NULL);
  }
}
/*
 * JOSUE
 * int p,c;
 * p=fork();
 * if(p)
 * {
 * c=getpid();
 * printf("PID:%d%d,c,p);
 * exit(NULL);
 * }
 * else
 * {
 * p=getpid();
 * c=getpid();
 * printf("PID:%d%d",c,p);
 * exit(NULL);
 * }
 */