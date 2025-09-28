#include <stdio.h>
#include <string.h>
#include "lexer.h" // important: quotes, points to include/lexer.h

const char *keywords[] = {
    "CREATE", "TABLE", "INSERT", "INTO", "VALUES", "SELECT", "FROM", "WHERE"};
const int num_keywords = sizeof(keywords) / sizeof(keywords[0]);

const char symbols[] = {'(', ')', ',', ';'};
const int num_symbols = sizeof(symbols) / sizeof(symbols[0]);

int is_symbol(char c)
{
    for (int i = 0; i < num_symbols; i++)
    {
        if (c == symbols[i])
            return 1;
    }
    return 0;
}
int is_keyword(const char *str)
{
    for (int i = 0; i < num_keywords; i++)
    {
        if (strcmp(str, keywords[i]) == 0)
            return 1;
    }
    return 0;
}

void tokenize(const char *input)
{
    char buf[256];
    strncpy(buf, input, sizeof(buf));
    buf[sizeof(buf) - 1] = '\0';

    char *tokenStr = strtok(buf, " ");
    while (tokenStr != NULL)
    {
        TokenType type;
        if (is_keyword(tokenStr))
        {
            type = TOKEN_KEYWORD;
        }
        else if (is_symbol(tokenStr))
        {
            type = TOKEN_SYMBOL;
        }

        else
        {
            type = TOKEN_IDENTIFIER;
        }
        printf("Token: %-10s TYPE: %d\n", tokenStr, type);
        tokenStr = strtok(NULL, " ");
    }
}
