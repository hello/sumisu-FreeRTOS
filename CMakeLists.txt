file(GLOB src
    "${CMAKE_CURRENT_SOURCE_DIR}/*.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/FreeRTOS/Source/*.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/FreeRTOS/Source/portable/GCC/nRF51_SD/*.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/FreeRTOS/Source/portable/MemMang/heap_4.c"
    "${sdk_location}/components/drivers_nrf/timer/nrf_drv_timer.c"
    "${sdk_location}/components/libraries/timer/app_timer.c"
    )


list(APPEND platform_src ${src})
set(platform_src "${platform_src}" PARENT_SCOPE)
