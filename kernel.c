#include "kernel/tty.h"

void kernel_early(void)
{
    terminal_initialize();
}

__attribute__((noreturn))
int main(void)
{
    printf("Hello OS!");
    while(1) { }
    return 0;
}
