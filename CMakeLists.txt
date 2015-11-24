file(GLOB src
    "${CMAKE_CURRENT_SOURCE_DIR}/FreeRTOS/Source/*.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/FreeRTOS/Source/portable/GCC/ARM_CM4F/*.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/FreeRTOS/Source/portable/MemMang/heap_4.c"
    )


list(APPEND platform_src ${src})
set(platform_src "${platform_src}" PARENT_SCOPE)
