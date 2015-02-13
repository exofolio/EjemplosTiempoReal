/* Sistemas dinamicos Ejemplo 36
 * Sea el sistema descrito por las ecuaciones siguientes:
 * 	1. X(k)=aX(k-1)+u 	ecuación de estado
 * 	2. Y(k)=cX(k)		ecuación de salida
 * 
 * Hacer un programa en c tal que 
 * 	a) J = {J1 y J2}
 *	b) J1 calcula X(k) e imprime su valor en pantalla
 * 	c) J2 calcula Y(k) e imprime su valor en pantalla
 * 	d) Considerando los siguientes datos: 0<=k<=100
 * 						x(0)=0.3
 * 						u=0.2
 * 						a=0.7
 * 						c=0.5
 **********************************************************/
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

void main()
{
    int tuberia[2];
    pipe(tuberia);
    float a=0.7;
    float u=0.2;
    float c=0.5;
    if(fork()==0)
    {
      float X[1];
      X(0)=0.3;
      for(int i=1;i<100;i++)
      {
	if(i==0)
	{
	  write(tuberia[1],X,sizeof(X));
	}
	else
	{
	  X(0)=a*X+u;
	  write(tuberia[1],X,sizeof(X));
	  printf("La funcion X(k)= %f",X(0));
	}
      }
    }
    else
    {
      float Y[1];
      for(int i=0;i<100;i++)
      {
      read(tuberia[0],X,sizeof(X));
      Y(0)=0.7*X(0);
      printf("La funcion Y(k)= %f",Y(0));
      }
    }
}