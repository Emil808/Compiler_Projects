#
# Makefile for Chapter 7
#
# Copyright (c) 2019 by Ronald Mak
# For instructional purposes only.  No warranties.
#
COMPILER = Chapter7cpp
SRCS =  Pascal.cpp \
        wci/Globals.cpp \
        wci/backend/Backend.cpp \
        wci/backend/compiler/CodeGenerator.cpp \
        wci/backend/interpreter/Executor.cpp \
        wci/backend/interpreter/RuntimeError.cpp \
        wci/backend/interpreter/RuntimeErrorHandler.cpp \
        wci/backend/interpreter/executors/AssignmentExecutor.cpp \
        wci/backend/interpreter/executors/CompoundExecutor.cpp \
        wci/backend/interpreter/executors/ExpressionExecutor.cpp \
        wci/backend/interpreter/executors/StatementExecutor.cpp \
        wci/frontend/Parser.cpp \
        wci/frontend/Source.cpp \
        wci/frontend/pascal/PascalError.cpp \
        wci/frontend/pascal/PascalErrorHandler.cpp \
        wci/frontend/pascal/PascalParserTD.cpp \
        wci/frontend/pascal/PascalScanner.cpp \
        wci/frontend/pascal/PascalToken.cpp \
        wci/frontend/pascal/parsers/AssignmentStatementParser.cpp \
        wci/frontend/pascal/parsers/CaseStatementParser.cpp \
        wci/frontend/pascal/parsers/CompoundStatementParser.cpp \
        wci/frontend/pascal/parsers/ExpressionParser.cpp \
        wci/frontend/pascal/parsers/ForStatementParser.cpp \
        wci/frontend/pascal/parsers/IfStatementParser.cpp \
        wci/frontend/pascal/parsers/RepeatStatementParser.cpp \
        wci/frontend/pascal/parsers/StatementParser.cpp \
        wci/frontend/pascal/parsers/WhileStatementParser.cpp \
        wci/frontend/pascal/parsers/LoopStatementParser.cpp \
        wci/frontend/pascal/parsers/WhenStatementParser.cpp \
        wci/frontend/pascal/tokens/PascalNumberToken.cpp \
        wci/frontend/pascal/tokens/PascalSpecialSymbolToken.cpp \
        wci/frontend/pascal/tokens/PascalStringToken.cpp \
        wci/frontend/pascal/tokens/PascalWordToken.cpp \
        wci/intermediate/icodeimpl/ICodeNodeImpl.cpp \
        wci/intermediate/symtabimpl/SymTabImpl.cpp \
        wci/intermediate/symtabimpl/SymTabStackImpl.cpp \
        wci/message/MessageHandler.cpp \
        wci/util/CrossReferencer.cpp \
        wci/util/ParseTreePrinter.cpp

# Replace with the path to the directory on your machine
# where you installed the Boost include files.
# See http://www.boost.org
BOOST_INCLUDE_DIR = /usr/local/include/boost

HEADER_DEPENDENCIES = header_dependencies.txt

# The object .o file names are derived 
# from the source .cpp file names.
OBJS = $(SRCS:.cpp=.o)

# How to compile source .cpp files into object .o files.
CC = g++
CFLAGS = -std=c++0x -O0 -g3 -Wall -Wno-sign-compare -Wno-deprecated -I$(BOOST_INCLUDE_DIR)
.cpp.o :
	$(CC) $(CFLAGS) -c -o $@ $<

all: $(COMPILER)

clean:
	rm $(OBJS) $(COMPILER)

# Build the compiler by compiling and linking the source .cpp files.
$(COMPILER) : $(OBJS)
	$(CC) -o $(COMPILER) $(OBJS)

# Use the interpreter to execute a Pascal .pas program.
# Examples: make execute src=hello.pas
#           make execute flags=ix src=hello.pas
execute: $(COMPILER) $(src)
	./$(COMPILER) execute -$(flags) $(src)

# Use the compiler to generate Jasmin .j object code 
# for a Pascal .pas program.
# Examples: make compile src=hello.pas
#           make compile src=hello.pas flags=i
compile: $(COMPILER)
	./$(COMPILER) compile -$(flags) $(src)

# Generate dependencies on the header files.
# Run 'make dependencies' if you added or removed .h or .cpp files.
# Not necessary if you only edited .h or .cpp files.
dependencies: depends
	$(CC) -MM $(SRCS) > raw_dependencies.txt
	./depends < raw_dependencies.txt > $(HEADER_DEPENDENCIES)
	rm raw_dependencies.txt

depends: depends.hidden
	cp depends.hidden depends.cpp
	g++ -o depends depends.cpp
	rm depends.cpp

sinclude $(HEADER_DEPENDENCIES)
