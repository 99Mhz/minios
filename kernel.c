#include "kernel/tty.h"

void kernel_early(void)
{
    terminal_initialize();
}

__attribute__((noreturn))
void main(void)
{
    printf("Hello OS expanded!");
    while(1) { }
}
