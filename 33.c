#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int main()
{
  int descriptores[2];
  pipe(descriptores);
  if(fork()==0)
  {
    int numeros[2];
    int i;
    for(i=0;i<2;i++)
    {
      printf("Escriba un entero\n");
      scanf("%d",&numeros[i]);
    }
    int producto;
    producto=numeros[0]*numeros[1];
    write(descriptores[1],producto,sizeof(producto));
    exit(NULL);
  }
  int producto;
  read(descriptores[0],producto,sizeof(producto));
  printf("El resultado es %d \n",producto);
  return 0;
}