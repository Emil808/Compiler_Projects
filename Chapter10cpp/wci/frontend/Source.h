/**
 * <h1>Source</h1>
 *
 * <p>The framework class that represents the source program.</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */
#ifndef WCI_FRONTEND_SOURCE_H_
#define WCI_FRONTEND_SOURCE_H_

#include <iostream>
#include <fstream>
#include <string>
#include "../message/MessageHandler.h"
#include "../message/MessageProducer.h"
#include "../message/MessageListener.h"

namespace wci { namespace frontend {

using namespace std;
using namespace wci::message;

class Source : public MessageProducer
{
public:
    /**
     * Constructor.
     * Set current_pos to -2 to read the first source line.
     * @param reader the reader for the source program
     */
    Source(istream &reader) : reader(reader), line_number(0), current_pos(-2) {}

    /**
     * Getter.
     * @return the current source line number.
     */
    int get_line_number() const { return line_number; }

    /**
     * Getter.
     * @return the position of the next source character in the
     * current source line.
     */
    int get_position() const { return current_pos; }

    /**
     * Return the source character at the current position.
     * Bug fix by Jonathan Pan [JP]: Do not skip the last source line
     * if it does not end with a line feed.
     * @return the source character at the current position.
     * @throw a string message if an error occurred.
     */
    char current_char() throw (string);

    /**
     * Consume the current source character and return the next character.
     * @return the next source character.
     * @throw a string message if an error occurred.
     */
    char next_char() throw (string);

    /**
     * Return the source character following the current character without
     * consuming the current character.
     * @return the following character.
     * @throw a string message if an error occurred.
     */
    char peek_char() throw (string);

    /**
     * @return true if at the end of the line, else return false.
     * @throw a string message if an error occurred.
     */
    bool at_eol() throw (string)
    {
        return current_pos == line_text.length();
    }

    /**
     * @return true if at the end of the file, else return false.
     * @throw a string message if an error occurred.
     */
    bool at_eof() throw (string)
    {
        // First time?
        if (current_pos == -2)  read_line();

        return reader.eof() && (current_pos >= line_text.length());
    }

    /**
     * Skip the rest of the current input line
     * by forcing the next read to read a new line.
     * @throw a string message if an error occurred.
     */
    void skip_to_next_line() throw (string)
    {
        current_pos = line_text.length() + 1;
    }

    /**
     * Close the source.
     * @throw a string message if an error occurred.
     */
    void close() throw (string)
    {
        // reader.close();
    }

    /**
     * Add a message listener to the listener list.
     * Implementation of wci::message::MessageProducer.
     * @param listener the message listener to add.
     */
    void add_message_listener(MessageListener *listener)
    {
        message_handler.add_listener(listener);
    }

    /**
     * Send a message.
     * Implementation of wci::message::MessageProducer.
     * @param message the message to send.
     */
    void send_message(Message& message) const
    {
        message_handler.send_message(message);
    }

    static const char END_OF_LINE;
    static const char END_OF_FILE;

private:
    static Message SOURCE_LINE_MESSAGE;

    istream& reader;                  // reader for the source program
    string line_text;                 // source line text
    int line_number;                  // current source line number
    int current_pos;                  // current source line position
    MessageHandler message_handler;

    /**
     * Read the next source line.
     * @throw a string message if an error occurred.
     */
    void read_line() throw (string);
};

}} // namespace wci::frontend

#endif /* WCI_FRONTEND_SOURCE_H_ */
