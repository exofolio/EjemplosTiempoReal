#include <stdio.h>
#include <sys/types.h>
void main(void)
{
 printf("mi PID es %d, ,mi PPID es %d ",getpid(),getppid()); 
}