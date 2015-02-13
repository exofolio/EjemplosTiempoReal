#include<sys/types.h>
#include<stdio.h>
void main(void)
{
  int pid;
  pid=fork();
  if(pid==0)
  {
    printf("Soy el hijo\n");
    exit(NULL);
  }
  if(pid>0)
  {
    printf("Soy el padre\n");
    exit(NULL);
  }
}
