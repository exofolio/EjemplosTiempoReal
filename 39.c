#include <sys/types.h>
#include <sys/stat.h>
#include <sys/fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
  char cadenaE[100];
  char cadenaR[100];
  int dtor1,dtor2;
  dtor1=open("./lee",O_RDONLY);
  dtor2=open("./escribe",O_WRONLY);
  while(1)
  {
  printf("Escriba la cadena a entrar\n");
  scanf("%s",cadenaE);
  write(dtor2,cadenaE,sizeof(cadenaE));
  printf("Esperando respuesta\n");
  read(dtor1,cadenaR,sizeof(cadenaR));
  printf("%s",cadenaR);
  }
}