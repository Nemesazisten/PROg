#include <stdio.h>
#include <linux/kernel.h>
#include <sys/syscall.h>
#include <unistd.h>

intmain()
{

long int s =syscall(333);  
printf("System call : sys_fer : return %1d \n", s);
return 0;
}
