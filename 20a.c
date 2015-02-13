#include <stdio.h>
#include <sys/types.h>
void main(void)
{
   printf("mi PID es %d, ,mi PPID es %d ",getpid(),getppid()); 
   if(!fork())
   {
     if(!fork())
     {
       if(!fork())//Execlp sobreescribe a los fork, los fork se ejecutan primero
       {//fork crea dos procesos y execlp se ejecuta de abajo hacia arriba
	 execlp("./20.1","./20.1",NULL);
       }
       execlp("./20.1","./20.1",NULL);
    }
    execlp("./20.1","./20.1",NULL);
   }
   execlp("./20.1","./20.1",NULL);
}
