/**
 * <h1>CodeGenerator</h1>
 *
 * <p>The code generator for a compiler back end.</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */
#include <chrono>
#include "CodeGenerator.h"
#include "../Backend.h"
#include "../../message/Message.h"

namespace wci { namespace backend { namespace compiler {

using namespace std;
using namespace std::chrono;
using namespace wci::backend;
using namespace wci::message;

void CodeGenerator::process(ICode *icode, SymTabStack *symtab_stack) throw (string)
{
    steady_clock::time_point start_time = steady_clock::now();
    int instruction_count = 0;

    // Send the compiler summary message.
    steady_clock::time_point end_time = steady_clock::now();
    double elapsed_time =
            duration_cast<duration<double>>(end_time - start_time).count();
    Message message(COMPILER_SUMMARY);
    message.content.compiler_summary.instruction_count = instruction_count;
    message.content.compiler_summary.elapsed_time = elapsed_time;
    send_message(message);
}

}}} // namespace wci::backend::compiler
