#include <debug.h>  // for scr_printf
#include <unistd.h> // for sleep
#include <kernel.h> // for SleepThread

int main(void) {
    init_scr();
    sleep(1);

    scr_printf("Hello, World!");
    SleepThread();
    
    return 0;
}

