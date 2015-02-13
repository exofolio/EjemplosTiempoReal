#include <stdio.h>
#include <sys/types.h>
void main(void)
{
  printf("20.1 Hola mi pid es %d y mi ppid es %d",getpid(),getppid());
  //fork();
  //execlp("./20.2","./20.2",NULL);
}