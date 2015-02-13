/*
 *Programa para J1
 */
#include <stdio.h>
#include <sys/types.h>
//Programa de Zamudio
int main(void)
{
  printf("Soy J1 mi pid: %d",getpid());
  if(!fork())//cero HIJO nuevo proceso
  {
    execlp("./18b","./18b",NULL);
  }
  if(!fork())//hijo nuevo proceso
  {
    execlp("./18c","./18c",NULL);
  }
  return 0;
}

/*
int main(void)
{
  printf("\n Soy J1: %d\n " ,getpid());
 
  if(!fork())
  {
    execlp("./18b","./18b",NULL);
  }
  else if(!fork())
  {
     execlp("./18c","./18c",NULL);
  }
  
  return 0;
}

*/