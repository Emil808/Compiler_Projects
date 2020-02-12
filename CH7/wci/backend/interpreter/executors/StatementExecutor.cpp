/**
 * <h1>StatementExecutor</h1>
 *
 * <p>Execute a statement.</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */
#include "StatementExecutor.h"
#include "CompoundExecutor.h"
#include "AssignmentExecutor.h"
#include "../Executor.h"
#include "../RuntimeError.h"
#include "../../../Object.h"
#include "../../../intermediate/ICodeNode.h"
#include "../../../intermediate/icodeimpl/ICodeNodeImpl.h"
#include "../../../message/Message.h"

namespace wci { namespace backend { namespace interpreter { namespace executors {

using namespace std;
using namespace wci;
using namespace wci::backend::interpreter;
using namespace wci::intermediate;
using namespace wci::intermediate::icodeimpl;
using namespace wci::message;

Message StatementExecutor::AT_LINE_MESSAGE(AT_LINE);

Object StatementExecutor::execute(ICodeNode *node)
{
    ICodeNodeTypeImpl node_type = (ICodeNodeTypeImpl) node->get_type();

    // Send a message about the current source line.
    send_at_line_message(node);

    switch (node_type)
    {
        case NT_COMPOUND:
        {
            CompoundExecutor compound_executor(this);
            return compound_executor.execute(node);
        }

        case NT_ASSIGN:
        {
            AssignmentExecutor assignment_executor(this);
            return assignment_executor.execute(node);
        }

        case NT_NO_OP: return Object();  // empty

        default:
        {
            error_handler.flag(node, UNIMPLEMENTED_FEATURE, this);
            return Object();  // empty
        }
    }
}

void StatementExecutor::send_at_line_message(ICodeNode *node)
{
    AT_LINE_MESSAGE.line_number = node->get_line_number();
    send_message(AT_LINE_MESSAGE);
}

}}}}  // namespace wci::backend::interpreter::executors
