/* Ejemplo 50 Sea J = {J1, J2, J3}
 * Hacer un programa en C tal que
 * a) J1 es padre de J2 y J3
 * b) J2 imprima en pantalla un conteo de 1 a 1000000
 * c) J3 imprima en pantalla un conteo de 1000000 a 1
 * d) J1 imprime un conteo de 1 al 100 y termina con sus dos hijos
 */
#include <stdio.h>
#include <sys/types.h>
#include <signal.h>
void main()
{
    int i,pid1,pid2;
    pid1=fork();
    if (pid1==0)
    {
        for(i=0;i<100;i++)
            printf("Conteo: %d",i);
    }
    pid2=fork();
    if (pid2==0)
    {
        for(i=100;i<1;i--)
            printf("Conteo: %d",i);
    }
    for(i=0;i<200;i++)
        printf("Conteo: %d",i);
    kill(pid1,SIGKILL);
    kill(pid2,SIGKILL);
}