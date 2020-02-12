################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Chapter3cpp/wci/frontend/pascal/PascalError.cpp \
../Chapter3cpp/wci/frontend/pascal/PascalErrorHandler.cpp \
../Chapter3cpp/wci/frontend/pascal/PascalParserTD.cpp \
../Chapter3cpp/wci/frontend/pascal/PascalScanner.cpp \
../Chapter3cpp/wci/frontend/pascal/PascalToken.cpp 

OBJS += \
./Chapter3cpp/wci/frontend/pascal/PascalError.o \
./Chapter3cpp/wci/frontend/pascal/PascalErrorHandler.o \
./Chapter3cpp/wci/frontend/pascal/PascalParserTD.o \
./Chapter3cpp/wci/frontend/pascal/PascalScanner.o \
./Chapter3cpp/wci/frontend/pascal/PascalToken.o 

CPP_DEPS += \
./Chapter3cpp/wci/frontend/pascal/PascalError.d \
./Chapter3cpp/wci/frontend/pascal/PascalErrorHandler.d \
./Chapter3cpp/wci/frontend/pascal/PascalParserTD.d \
./Chapter3cpp/wci/frontend/pascal/PascalScanner.d \
./Chapter3cpp/wci/frontend/pascal/PascalToken.d 


# Each subdirectory must supply rules for building sources it contributes
Chapter3cpp/wci/frontend/pascal/%.o: ../Chapter3cpp/wci/frontend/pascal/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


