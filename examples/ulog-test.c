#include <stdio.h>
#include "ulog.h"

int main()
{
    ulog_open(ULOG_STDIO, LOG_USER, NULL);
    ulog_threshold(LOG_DEBUG);
    ULOG_DEBUG("debug message\n");
    ULOG_INFO("info message\n");
    ULOG_ERR("error message\n");
    ulog_close();

    return 0;
}