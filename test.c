#include "FreeRTOS.h"
#include "task.h"
#include "io.h"
#include "app_scheduler.h"
#include "nrf_soc.h"
#include "nrf_sdm.h"
#include "softdevice_handler.h"

static void _mytask(void * param){
    while(1){
        os_printf("World\r\n");
        vTaskDelay(1000);
    }
}
static void _mytask2(void * param){
    while(1){
        os_printf("DDDD\r\n");
        vTaskDelay(1000);
    }
}
void app_error_handler(uint32_t error, uint32_t line_num, const uint8_t * file_name){
    os_printf("OH NOES");
    while(1);

}
void test_rtos(){
    SOFTDEVICE_HANDLER_INIT(NRF_CLOCK_LFCLKSRC_SYNTH_250_PPM, NULL);
    /*
     *timers_init();
     *application_timers_start();
     */
    xTaskCreate(_mytask, "1", 256, NULL, 2, NULL);
    xTaskCreate(_mytask2, "1", 256, NULL, 2, NULL);
    vTaskStartScheduler();

    os_printf("shouldn't be here");
}
