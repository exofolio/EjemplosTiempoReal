#include <stdio.h>
#include <sys/types.h>
void main(void)
{
  printf("20.2 Hola mi pid es %d y mi ppid es %d",getpid(),getppid());
  fork();
  execlp("./20.3","./20.3",NULL);
} 
