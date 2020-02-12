################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Chapter3cpp/wci/frontend/pascal/tokens/PascalNumberToken.cpp \
../Chapter3cpp/wci/frontend/pascal/tokens/PascalSpecialSymbolToken.cpp \
../Chapter3cpp/wci/frontend/pascal/tokens/PascalStringToken.cpp \
../Chapter3cpp/wci/frontend/pascal/tokens/PascalWordToken.cpp 

OBJS += \
./Chapter3cpp/wci/frontend/pascal/tokens/PascalNumberToken.o \
./Chapter3cpp/wci/frontend/pascal/tokens/PascalSpecialSymbolToken.o \
./Chapter3cpp/wci/frontend/pascal/tokens/PascalStringToken.o \
./Chapter3cpp/wci/frontend/pascal/tokens/PascalWordToken.o 

CPP_DEPS += \
./Chapter3cpp/wci/frontend/pascal/tokens/PascalNumberToken.d \
./Chapter3cpp/wci/frontend/pascal/tokens/PascalSpecialSymbolToken.d \
./Chapter3cpp/wci/frontend/pascal/tokens/PascalStringToken.d \
./Chapter3cpp/wci/frontend/pascal/tokens/PascalWordToken.d 


# Each subdirectory must supply rules for building sources it contributes
Chapter3cpp/wci/frontend/pascal/tokens/%.o: ../Chapter3cpp/wci/frontend/pascal/tokens/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


