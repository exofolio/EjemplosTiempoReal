#include <stdio.h>
#include <sys/types.h>
void main(void)
{
  printf("20.4 mi PID es %d, ,mi PPID es %d ",getpid(),getppid()); 
}