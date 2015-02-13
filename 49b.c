#include <stdio.h>
#include <sys/types.h>
void main()
{
    while(1)
    {
        printf("PID: %d\n", getpid());
    }
}