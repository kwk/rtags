#ifndef MESSAGES_H
#define MESSAGES_H

#include "messages/AddMessage.h"
#include "messages/QueryMessage.h"
#include "messages/ErrorMessage.h"
#include "messages/ResponseMessage.h"
#include "messages/OutputMessage.h"

class Messages
{
public:
    static void init();

private:
    Messages();
};

#endif // MESSAGES_H
