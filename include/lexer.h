#ifndef LEXER_H
#define LEXER_H

typedef enum
{
    TOKEN_KEYWORD,
    TOKEN_IDENTIFIER,
    TOKEN_NUMBER,
    TOKEN_SYMBOL
} TokenType;

typedef struct
{
    TokenType type;
    char text[64];
} Token;

void tokenize(const char *input);

#endif // LEXER_H
