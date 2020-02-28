################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../wci/frontend/Parser.cpp \
../wci/frontend/Source.cpp 

OBJS += \
./wci/frontend/Parser.o \
./wci/frontend/Source.o 

CPP_DEPS += \
./wci/frontend/Parser.d \
./wci/frontend/Source.d 


# Each subdirectory must supply rules for building sources it contributes
wci/frontend/%.o: ../wci/frontend/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -I/home/abhi/Desktop/boost_top -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


