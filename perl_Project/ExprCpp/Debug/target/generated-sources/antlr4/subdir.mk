################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../target/generated-sources/antlr4/perlBaseVisitor.cpp \
../target/generated-sources/antlr4/perlLexer.cpp \
../target/generated-sources/antlr4/perlParser.cpp \
../target/generated-sources/antlr4/perlVisitor.cpp 

OBJS += \
./target/generated-sources/antlr4/perlBaseVisitor.o \
./target/generated-sources/antlr4/perlLexer.o \
./target/generated-sources/antlr4/perlParser.o \
./target/generated-sources/antlr4/perlVisitor.o 

CPP_DEPS += \
./target/generated-sources/antlr4/perlBaseVisitor.d \
./target/generated-sources/antlr4/perlLexer.d \
./target/generated-sources/antlr4/perlParser.d \
./target/generated-sources/antlr4/perlVisitor.d 


# Each subdirectory must supply rules for building sources it contributes
target/generated-sources/antlr4/%.o: ../target/generated-sources/antlr4/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -I"/home/emil/eclipse-workspace/Zane_Projects/Compiler_Projects/perl_Project/ExprCpp" -I"/home/emil/eclipse-workspace/Zane_Projects/Compiler_Projects/perl_Project/ExprCpp/target/generated-sources/antlr4" -I/usr/local/include/antlr4-runtime -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


