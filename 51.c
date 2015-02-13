/*Signal()
 * Se utiliza para tratamiento de señales
 * signal()
 * Sintaxis: #include <signal.h>
 *           void (*signal(int, sig,void (*func)(int)))(int)
 * Argumentos:
 *          sig es el número o nombre de la señal
 *          func es el apuntador a señal a tratar
 *  SIG_DFL
 *  SIG_IGN
 * Descripción: