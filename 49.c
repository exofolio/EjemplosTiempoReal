/* Sea J = {J1 y J2}
 * Hacer un prograna en C tal que:
 * a) j1 y j2 se ejecuten en terminales diferentes
 * b) J2 entra en un ciclo infinito imprimiendo su PID
 * c) J1 solicita el PID de J2 del tevlado y termina la ejecución de J2
 */
#include <stdio.h>
#include <signal.h>
void main()
{  
    int PID;
    printf("Escriba el PID a terminar: ");
    scanf("%d",&PID);
    kill(PID,SIGKILL);
}    
