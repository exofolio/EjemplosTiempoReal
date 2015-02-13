#include <sys/types.h>
#include <sys/stat.h>
#include <sys/fcntl.h>
#include <stdio.h>
#include <stdlib.h>
void main()
{
  int y[1],des2;
  des2=open("./prueba",O_RDONLY);
  read(des2,y,sizeof(y));
  printf("y1=%d, y2=%d\n",y[0],y[0]);
  printf("Adios");
  close(des2);
}
