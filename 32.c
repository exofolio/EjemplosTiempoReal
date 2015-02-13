/* Comunicación entre procesos
 * Enviar información entre procesos
 * Sincronizar procesos
 * Notificar que un eveto ocurrio
 * 
 * Comunicación sincrona y asincrona
 * 
 * Sincrona, tuberias sin nombre pipe() MEMORIA
 * Tuberias con nombre FIFO DISCO
 * Mensajes Envio - Recepción - Respuesta MEMORIA
 * 
 * 
 * Comunicación asincrona
 * 
 * Interrupciones de software
 * 
 * Sockets
 * 
 * SocketPair
 * 
 * 
 * 		Tuberias Sin Nombre pipe()
 * 				
 * 		J1 y J2 
 * 		  pipe
 * 
 * int tubo[2];
 * pipe(tubo)
 * tubo[1] es para escribir
 * tubo[0] es para leer
 * 
 * Estados de bloqueo por lectura o por escritura
 * 
 * 
 * Funciones para manejo de tuberias pipe
 * 
 * 
 * funcion pipe() -> Crea el canal de comunicación
 * 
 * write() -> Escribe la información en la tuberia
 * 
 * read()  -> Lee la información de la tuberia
 * 
 * close()-> se cierra la tuberia
 * 
 * funcion pipe()
 * 
 * 
 *Sintaxis:
 * #include <unistd.h>
 * int pipe (int fildes[2]);
 * Argumentos: fildes es el descriptor de archivo de entrada y salida de la tuberia pipe
 * Descripción: pipe() crea una tuberia sin nombre y ubica el descriptor fildes[0] para leer y el descriptor fildes[1] para escribir
 * Devuelve: 0 si se creo la tuberia o -1 si hay error
 * En POSIX todo se maneja como archivos
 * 
 * funcion write()
 * 
 * 
 * Sintaxis:
 * #include <unistd.h>
 * #include <fcntl.h>
 * int write(int fildes,void *buffer,int nbyte);
 * 
 * Argumentos:
 * fildes: descriptor de archivo de escritura
 * buffer Apuntador al buffer que sera escrito
 * nbyte: Número de bytes escrito
 * 
 * Descripción: write() escribe nbyte byes del archivo asociado al descriptor fildes, debtro del buffer apuntado por buffer
 * 
 * Devuelve: -1 si hay error
 * el numero de bytes escritos
 * 
 * 
 * Función read()
 * 
 * Sintaxis:
 * #include <unistd.h>
 * #include <fcntl.h>
 * int read(int fildes,void *buffer, int nbyte);
 * Argumentos:
 * 
 * fildes: descriptor del archivo de lectura
 * buffer: Apuntador al buffer que guarda la información
 * nbyte: Número de bytes
 * 
 * 
 * Descripción: read() lee nbyte bytes del archivo asociado al descriptor fildes, dentro del buffer apuntado por buffer
 * 
 * 
 * Devuelve: -1 si hay error
 * el número de bytes leidos
 * 
 * Función close()
 * 
 * Sintaxis:
 * #include <unistd.h>
 * #include <fcntl.h>
 * int close(int fildes)
 * Argumentos:
 * fildes: descriptor del archivo abierto
 * Devuelve 0 si se cerro el archivo
 * -1 si hay error
 * 
 * pipe siempres va antes de fork()
 * 
 ************************************************/
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
void main()
{
  int tuberia[2];
  pipe(tuberia);
  if(fork()==0)
  {
    int buffer[1];
    buffer[0]=11230;
    write(tuberia[1],buffer,sizeof(buffer));
    close(tuberia[1]);
    exit(NULL);
  }
  int buffer2[1];
  read(tuberia[0],buffer2,sizeof(buffer2));
  //read(tuberia[0],buffer2,sizeof(buffer2));
  printf("lei de tuberia: %d \n",buffer2[0]);
  close(tuberia[0]);
}