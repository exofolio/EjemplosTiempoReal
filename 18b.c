/* Programa para J2
 */
#include <stdio.h>
#include <sys/types.h>
int main(void)
{
  int pid;
  pid=getpid();
  printf("\nSoy J2 %d\n",pid);
  return 0;
}
