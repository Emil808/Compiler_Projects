################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../wci/intermediate/icodeimpl/ICodeImpl.cpp \
../wci/intermediate/icodeimpl/ICodeNodeImpl.cpp 

OBJS += \
./wci/intermediate/icodeimpl/ICodeImpl.o \
./wci/intermediate/icodeimpl/ICodeNodeImpl.o 

CPP_DEPS += \
./wci/intermediate/icodeimpl/ICodeImpl.d \
./wci/intermediate/icodeimpl/ICodeNodeImpl.d 


# Each subdirectory must supply rules for building sources it contributes
wci/intermediate/icodeimpl/%.o: ../wci/intermediate/icodeimpl/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -I"/home/abhi/eclipse-workspace/Antlr" -I"/home/abhi/eclipse-workspace/Antlr/target/generated-sources/antlr4" -I/usr/local/include/antlr4-runtime -I/home/abhi/Desktop/boost_1_72_0 -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


