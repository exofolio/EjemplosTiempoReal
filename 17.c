/*
 * Instalar build-essential
 */
#include<sys/types.h>
#include<stdio.h>
void main(void)
{
  printf("Hola mundo");
  execlp("./J3","./J3",NULL);  
}
