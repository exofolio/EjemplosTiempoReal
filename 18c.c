/* Programa para J3
 */
#include <stdio.h>
#include <sys/types.h>
int main(void)
{
  int pid;
  pid=getpid();
  printf("\n Soy J3: %d\n",pid);
  return 0;
}
