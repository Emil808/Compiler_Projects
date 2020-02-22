################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../wci/backend/interpreter/executors/AssignmentExecutor.cpp \
../wci/backend/interpreter/executors/CompoundExecutor.cpp \
../wci/backend/interpreter/executors/ExpressionExecutor.cpp \
../wci/backend/interpreter/executors/StatementExecutor.cpp 

O_SRCS += \
../wci/backend/interpreter/executors/AssignmentExecutor.o \
../wci/backend/interpreter/executors/CompoundExecutor.o \
../wci/backend/interpreter/executors/ExpressionExecutor.o \
../wci/backend/interpreter/executors/StatementExecutor.o 

OBJS += \
./wci/backend/interpreter/executors/AssignmentExecutor.o \
./wci/backend/interpreter/executors/CompoundExecutor.o \
./wci/backend/interpreter/executors/ExpressionExecutor.o \
./wci/backend/interpreter/executors/StatementExecutor.o 

CPP_DEPS += \
./wci/backend/interpreter/executors/AssignmentExecutor.d \
./wci/backend/interpreter/executors/CompoundExecutor.d \
./wci/backend/interpreter/executors/ExpressionExecutor.d \
./wci/backend/interpreter/executors/StatementExecutor.d 


# Each subdirectory must supply rules for building sources it contributes
wci/backend/interpreter/executors/%.o: ../wci/backend/interpreter/executors/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -I/home/abhi/Desktop/boost_top -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


