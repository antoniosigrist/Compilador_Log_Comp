%e  1019
%p  2807
%n  371
%k  284
%a  1213
%o  1117

O   [0-7]
D   [0-9]
NZ  [1-9]
L   [a-zA-Z_]
A   [a-zA-Z_0-9]
H   [a-fA-F0-9]
HP  (0[xX])
E   ([Ee][+-]?{D}+)
P   ([Pp][+-]?{D}+)
FS  (f|F|l|L)
IS  (((u|U)(l|L|ll|LL)?)|((l|L|ll|LL)(u|U)?))
CP  (u|U|L)
SP  (u8|u|U|L)
ES  (\\(['"\?\\abfnrtv]|[0-7]{1,3}|x[a-fA-F0-9]+))
WS  [ \t\v\n\f]

%{
#include <string>
#include "node.h"
#include "c.tab.hpp"

extern int sym_type(const char *);  /* returns type from symbol table */
#define sym_type(identifier) IDENTIFIER /* with no symbol table, fake it

extern void yyerror(const char *);  /* prints grammar violation message */
static void comment(void);
static int check_type(void);
#define YY_DECL extern "C" int yylex()

#define SAVE_TOKEN  yylval.string = new std::string(yytext, yyleng)
#define TOKEN(t)    (yylval.token = t)
%}


%%
"'"                                    { comment(); }
"'".*                                    { /* consume //-comment */ }

"auto"                  { return TOKEN(AUTO); }
"break"                 { return TOKEN(BREAK); }
"case"                  { return TOKEN(CASE); }
"const"                 { return TOKEN(CONST); }
"continue"              { return TOKEN(CONTINUE); }
"default"               { return TOKEN(DEFAULT); }
"else"                  { return TOKEN(ELSE); }
"if"                    { return TOKEN(IF); }
"return"                { return TOKEN(RETURN); }
"while"                 { return TOKEN(WHILE); }
"print"                 { return TOKEN(PRINT); }
"and"                 { return TOKEN(AND); }
"or"                 { return TOKEN(OR); }
"not"                 { return TOKEN(NOT); }
"input"                 { return TOKEN(INPUT); }


"void"                  { SAVE_TOKEN; return (VOID); }
"char"                  { SAVE_TOKEN; return (CHAR); }
"double"                { SAVE_TOKEN; return (DOUBLE); }
"float"                 { SAVE_TOKEN; return(FLOAT); }
"int"                   { SAVE_TOKEN; return (INT); }
"long"                  { SAVE_TOKEN; return(LONG); }
"short"                 { SAVE_TOKEN; return (SHORT); }
"signed"                { SAVE_TOKEN; return (SIGNED); }
"unsigned"              { SAVE_TOKEN; return (UNSIGNED); }
"bool"                 { SAVE_TOKEN; return (BOOL); }
"true"                  {SAVE_TOKEN; return B_CONSTANT;}
"false"                  {SAVE_TOKEN; return B_CONSTANT;}



"+="                    { return TOKEN(ADD_ASSIGN); }
"-="                    { return TOKEN(SUB_ASSIGN); }
"*="                    { return TOKEN(MUL_ASSIGN); }
"/="                    { return TOKEN(DIV_ASSIGN); }
"%="                    { return TOKEN(MOD_ASSIGN); }
"&="                    { return TOKEN(AND_ASSIGN); }
"^="                    { return TOKEN(XOR_ASSIGN); }
"|="                    { return TOKEN(OR_ASSIGN); }
">>"                    { return TOKEN(RIGHT_OP); }
"<<"                    { return TOKEN(LEFT_OP); }
"++"                    { return TOKEN(INC_OP); }
"--"                    { return TOKEN(DEC_OP); }
"->"                    { return TOKEN(PTR_OP); }
"&&"                    { return TOKEN(AND_OP); }
"||"                    { return TOKEN(OR_OP); }
"<="                    { return TOKEN(LE_OP); }
">="                    { return TOKEN(GE_OP); }
"=="                    { return TOKEN(EQ_OP); }
"!="                    { return TOKEN(NE_OP); }
","                     { return TOKEN(','); }
":"                     { return TOKEN(':'); }
"="                     { return TOKEN('='); }
"("                     { return TOKEN('('); }
")"                     { return TOKEN(')'); }
"."                     { return TOKEN('.'); }
"&"                     { return TOKEN('&'); }
"!"                     { return TOKEN('!'); }
"~"                     { return TOKEN('~'); }
"-"                     { return TOKEN('-'); }
"+"                     { return TOKEN('+'); }
"*"                     { return TOKEN('*'); }
"/"                     { return TOKEN('/'); }
"%"                     { return TOKEN('%'); }
"<"                     { return TOKEN('<'); }
">"                     { return TOKEN('>'); }
"^"                     { return TOKEN('^'); }
"|"                     { return TOKEN('|'); }
"?"                     { return TOKEN('?'); }

{WS}+                   { /* whitespace separates tokens */ }
.                   { /* discard bad characters */ }

%%

int yywrap(void)        /* called at end of input */
{
    return 1;           /* terminate now */
}

static void comment(void)
{
    printf("Removing comments..\n");
    int c;

    while ((c = yyinput()) != 0)
        if (c == '*')
        {
            while ((c = yyinput()) == '*')
                ;

            if (c == '/')
                return;

            if (c == 0)
                break;
        }
    // yyerror("unterminated comment");
}

static int check_type(void)
{
    switch (sym_type(yytext))
    {
    case TYPEDEF_NAME:                /* previously defined */
        return TYPEDEF_NAME;
    case ENUMERATION_CONSTANT:        /* previously defined */
        return ENUMERATION_CONSTANT;
    default:                          /* includes undefined */
        SAVE_TOKEN;
        return  IDENTIFIER;
    }
}