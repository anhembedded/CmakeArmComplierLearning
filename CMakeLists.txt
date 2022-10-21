# THIS FILE IS AUTO GENERATED FROM THE TEMPLATE! DO NOT CHANGE!
set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_SYSTEM_VERSION 1)
cmake_minimum_required(VERSION 3.23)

project(learnArmComplier)
set(CMAKE_C_STANDARD 11)

# specify cross-compilers and tools
set(CMAKE_C_COMPILER arm-none-eabi-gcc)
set(CMAKE_ASM_COMPILER arm-none-eabi-gcc)
set(CMAKE_AR arm-none-eabi-ar)
set(CMAKE_OBJCOPY arm-none-eabi-objcopy)
set(CMAKE_OBJDUMP arm-none-eabi-objdump)
set(SIZE arm-none-eabi-size)
set(CMAKE_TRY_COMPILE_TARGET_TYPE STATIC_LIBRARY)

add_compile_options(-mcpu=cortex-m4 -mthumb -mthumb-interwork)
add_compile_options(-ffunction-sections -fdata-sections -fno-common -fmessage-length=0)




add_definitions(-DDEBUG -DUSE_HAL_DRIVER -DSTM32F407xx)

message("## Project name: " ${CMAKE_PROJECT_NAME})
message("## Host system processor: " ${CMAKE_HOST_SYSTEM_PROCESSOR})
message("## CPP compiler: " ${CMAKE_CXX_COMPILER})
message("## Ccompiler: " ${CMAKE_C_COMPILER})
message("## Linker compiler: " ${LINKER_LANGUAGE})
message("## Build type: " ${CMAKE_BUILD_TYPE})


set(LINKER_SCRIPT ${CMAKE_SOURCE_DIR}/STM32F407VGTX_FLASH.ld)
add_link_options(-Wl,-gc-sections,--print-memory-usage,-Map=${PROJECT_BINARY_DIR}/${PROJECT_NAME}.map)
add_link_options(-mcpu=cortex-m4 -mthumb -mthumb-interwork)
add_link_options(-T ${LINKER_SCRIPT})

add_executable(${PROJECT_NAME}.elf main.c ${LINKER_SCRIPT})
