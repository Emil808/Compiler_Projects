################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../wci/intermediate/typeimpl/TypeChecker.cpp \
../wci/intermediate/typeimpl/TypeSpecImpl.cpp 

OBJS += \
./wci/intermediate/typeimpl/TypeChecker.o \
./wci/intermediate/typeimpl/TypeSpecImpl.o 

CPP_DEPS += \
./wci/intermediate/typeimpl/TypeChecker.d \
./wci/intermediate/typeimpl/TypeSpecImpl.d 


# Each subdirectory must supply rules for building sources it contributes
wci/intermediate/typeimpl/%.o: ../wci/intermediate/typeimpl/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -I"/home/abhi/eclipse-workspace/Antlr" -I"/home/abhi/eclipse-workspace/Antlr/target/generated-sources/antlr4" -I/usr/local/include/antlr4-runtime -I/home/abhi/Desktop/boost_1_72_0 -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


