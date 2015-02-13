#include <stdio.h>
#include <sys/types.h>
void main(void)
{
  int i;
  for(i=0;i<100;i++)
  {
    if(!fork()) execlp("./19b","./19b",NULL);
  }
}
