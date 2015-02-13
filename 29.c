#include <stdio.h>
#include <sys/types.h>

void main()
{
  //printf("Hola mundo");
  int i;

  for(i=0;i<128;i++)
  {
    spawnlp(P_NOWAIT,"./29b","./29b",NULL);
  }
}