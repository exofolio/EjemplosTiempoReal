/* Señales es POSIX
 * 
 * - Esquema de comunicación asíncrona
 * - Cualquier proceso puede recibir una señal en cualquier momento, a menos que se le indique que la ignore o le de tratamiento especial.
 * - No se ocupan para enviar información, sino para notificar que algo ha pasado.
 * - Se consideran interrupciones de software
 * - La señal mas común es SIGINT, es la que interrumpe la ejecución de un proceso y una forma de obtenerla es con CTRL+C
 * ------------------------------------------------------
 * Algunas señales importantes son:
 * SIGINT - Interrupción de la ejecución de un proceso
 * SIGTERM - Terminación de un proceso
 * SIGKILL - Señal mas fuerte para interrumpir un proceso, no se puede ignorar
 * SIGPIPE - Error en tuberia
 * SIGALRM - Señal generada cuando un temporizador llega a 0
 * kill()
 * Sintaxis: #include <sys/types.h>
 * #include <signals.h>
 * int kill(int pid,int sig);
 * Argumentos: pid es el identificador del proceso que recibira la señal
 * sig es es tipo de señal a enviar (por ejemplo SIGPIPE)
 * Descripción kill() envia la señal sig a un proceso especificado por pid si sig es 0 no se enviara ninguna señal
 * devuelve 0 si la señal fue enviada
 * -1 si hay error
 */