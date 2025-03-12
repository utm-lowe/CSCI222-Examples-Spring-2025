/**
 * @file command.h
 * @author Bob Lowe & Class
 * @brief A generic command interface.
 * @version 0.1
 * @date 2025-03-10
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#ifndef COMMAND_H
#define COMMAND_H

class Command
{
public:
    virtual void execute()=0;
    virtual ~Command() { /* this space left intentionally blank*/ }
};

#endif