################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../wci/intermediate/ICodeFactory.cpp \
../wci/intermediate/SymTabFactory.cpp \
../wci/intermediate/TypeFactory.cpp 

OBJS += \
./wci/intermediate/ICodeFactory.o \
./wci/intermediate/SymTabFactory.o \
./wci/intermediate/TypeFactory.o 

CPP_DEPS += \
./wci/intermediate/ICodeFactory.d \
./wci/intermediate/SymTabFactory.d \
./wci/intermediate/TypeFactory.d 


# Each subdirectory must supply rules for building sources it contributes
wci/intermediate/%.o: ../wci/intermediate/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -I"/home/abhi/eclipse-workspace/Antlr" -I"/home/abhi/eclipse-workspace/Antlr/target/generated-sources/antlr4" -I/usr/local/include/antlr4-runtime -I/home/abhi/Desktop/boost_1_72_0 -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


