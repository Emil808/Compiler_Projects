################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Chapter3cpp/wci/backend/interpreter/Executor.cpp 

OBJS += \
./Chapter3cpp/wci/backend/interpreter/Executor.o 

CPP_DEPS += \
./Chapter3cpp/wci/backend/interpreter/Executor.d 


# Each subdirectory must supply rules for building sources it contributes
Chapter3cpp/wci/backend/interpreter/%.o: ../Chapter3cpp/wci/backend/interpreter/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


