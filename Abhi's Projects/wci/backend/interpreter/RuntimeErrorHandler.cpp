/**
 * <h1>PascalErrorHandler</h1>
 *
 * <p>Error handler Pascal syntax errors.</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */
#include <iostream>
#include <string>
#include "RuntimeErrorHandler.h"
#include "RuntimeError.h"
#include "../../intermediate/ICodeNode.h"
#include "../../intermediate/icodeimpl/ICodeNodeImpl.h"
#include "../../message/Message.h"

namespace wci { namespace backend { namespace interpreter {

using namespace std;
using namespace wci::backend;
using namespace wci::intermediate::icodeimpl;
using namespace wci::message;

const int RuntimeErrorHandler::MAX_ERRORS = 5;
int RuntimeErrorHandler::error_count = 0;

void RuntimeErrorHandler::flag(ICodeNode *node, RuntimeErrorCode error_code,
                               Backend *backend)
{
    // Look for the ancestor statement node with a line number attribute.
    while (   (node != nullptr)
            && (node->get_line_number() == 0))
    {
        node = node->get_parent();
    }

    // Notify the interpreter's listeners.
    Message message(RUNTIME_ERROR);
    message.line_number = node->get_line_number();
    message.content.runtime_error.error_message =
            RuntimeError::RUNTIME_ERROR_MESSAGES[error_code].c_str();
    backend->send_message(message);

    if (++error_count > MAX_ERRORS)
    {
        cout << "*** ABORTED AFTER TOO MANY RUNTIME ERRORS." << endl;
        exit(-3);
    }
}

}}}  // wci::backend::interpreter
