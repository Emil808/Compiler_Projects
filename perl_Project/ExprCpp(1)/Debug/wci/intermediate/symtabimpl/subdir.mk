################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../wci/intermediate/symtabimpl/Predefined.cpp \
../wci/intermediate/symtabimpl/SymTabEntryImpl.cpp \
../wci/intermediate/symtabimpl/SymTabImpl.cpp \
../wci/intermediate/symtabimpl/SymTabStackImpl.cpp 

OBJS += \
./wci/intermediate/symtabimpl/Predefined.o \
./wci/intermediate/symtabimpl/SymTabEntryImpl.o \
./wci/intermediate/symtabimpl/SymTabImpl.o \
./wci/intermediate/symtabimpl/SymTabStackImpl.o 

CPP_DEPS += \
./wci/intermediate/symtabimpl/Predefined.d \
./wci/intermediate/symtabimpl/SymTabEntryImpl.d \
./wci/intermediate/symtabimpl/SymTabImpl.d \
./wci/intermediate/symtabimpl/SymTabStackImpl.d 


# Each subdirectory must supply rules for building sources it contributes
wci/intermediate/symtabimpl/%.o: ../wci/intermediate/symtabimpl/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -I"/home/abhi/eclipse-workspace/Antlr" -I"/home/abhi/eclipse-workspace/Antlr/target/generated-sources/antlr4" -I/usr/local/include/antlr4-runtime -I/home/abhi/Desktop/boost_1_72_0 -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


