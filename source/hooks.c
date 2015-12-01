#include "FreeRTOS.h"
#include "io.h"

void vApplicationMallocFailedHook(void){
    os_printf("failed malloc\r\n");
}
void vApplicationStackOverflowHook(void){
    os_printf("stack overflow\r\n");
}
