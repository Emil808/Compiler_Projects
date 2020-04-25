#ifndef PASS2VISITOR_H_
#define PASS2VISITOR_H_

#include <iostream>
#include <string>

#include "wci/intermediate/SymTabStack.h"
#include "wci/intermediate/SymTabEntry.h"
#include "wci/intermediate/TypeSpec.h"

#include "perlBaseVisitor.h"
#include "antlr4-runtime.h"
#include "perlVisitor.h"

using namespace wci;
using namespace wci::intermediate;

class Pass2Visitor : public perlBaseVisitor
{
private:
	string program_name;
	string j_file_name;
	ofstream j_file;

public:
	Pass2Visitor();
    virtual ~Pass2Visitor();

    ostream& get_assembly_file();

    antlrcpp::Any visitProgram(perlParser::ProgramContext *ctx) override;

    //todo: other visitor functions in here

};




#endif /* PASS2VISITOR_H_ */
