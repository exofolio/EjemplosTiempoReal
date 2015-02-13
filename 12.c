#include<sys/types.h>
#include<stdio.h>
void main()
{
  int pid,a;
  a=10;
  pid=fork();
  if(pid)
  {
    printf("a:%d\n",a);
    a=1000;
    exit(NULL);
  }
  else
  {
    printf("a:%d\n",a);
    exit(NULL);
  }
}