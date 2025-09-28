#include <stdio.h>
#include <string.h>
#include "lexer.h"

int main()
{
    char buf[256];
    printf("LiteDB initialized.\n");
    while (1)
    {

        printf("LiteDB>");
        if (!fgets(buf, sizeof(buf), stdin))
            break;
        buf[strcspn(buf, "\n")] = 0;
        if (strcmp(buf, "EXIT") == 0)
            break;
        tokenize(buf);
    }
    return 0;
}