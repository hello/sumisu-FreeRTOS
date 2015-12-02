#include "FreeRTOS.h"
#include "io.h"

void vApplicationMallocFailedHook(void){
    LOGE("failed malloc\r\n");
}
void vApplicationStackOverflowHook(void){
    LOGE("stack overflow\r\n");
}
