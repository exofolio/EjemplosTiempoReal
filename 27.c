#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>
int main()
{
  float num[2];
  int i=0;
  for(i=0;i<2;i++)
  {
    printf("Introduzca un número\n");
    scanf("%f",num+i);
  }
  if(fork()==0)
  {
    float total=num[0]+num[1];
    printf("La suma es:\t %.2f\n",total);
    exit(1);
  }
  if(fork()==0)
  {
    float total=num[0]*num[1];
    printf("La multiplicación es:\t %.2f\n",total);
    exit(1);
  }
}