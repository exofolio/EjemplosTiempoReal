/* Tuberias con nombre FIFO
 *  Son un esquema de comunicación con nombre en el directorio
 * - Tiene una entrada en el directorio
 * - Aparecen como archivos de 0 bytes
 * - Están presentes independientemente del ciclo de vida de los procesos
 * - No se requiere parentezco entre procesos
 * - Se van a crear con mkfifo antes de ejecutar los procesos 
 * Utilizar la función open()
 * Sintaxis:
 * #include <sys/types.h>
 * #include <sys/stat.h>
 * #include <sys/fcntl.h>
 * int open(const *char *tuberia, int modo);
 * Argumentos:
 * 	tuberia: nombre de la tuberia FIFO creada previamente con mkfifo desde el shell de la terminal
 * 	mode: tipo de acceso a la tuberia:
 * 		O_RDONLY
 *		0_WRONLY
 *		O_NONBLOCK
 * 	Devuelve: El descriptor de archivo de la tuberia
 * 	-1 si hay error
 */
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/fcntl.h>
#include <stdio.h>
#include <stdlib.h>
void main()
{
  int x[1],des;
  printf("Escriba dos numeros:\n");
  scanf("%d",x);
  //scanf("%d",x+1);
  des=open("./prueba",O_WRONLY);
  write(des,x,sizeof(x));
  printf("Adios");  
  close(des);
}
