/*
    File Type   : C Source
    Description : DCD implementation of the ctype library (ISO C17 Standard 7.4) 
                  used for character handling. Supports the ANSI ASCII character set
*/

#include "../include/_dcd_lib.h"
#include "../include/dcd_ctype.h"

int dcd_isalnum(int c) { return dcd_isdigit(c) || dcd_isalpha(c); }
int dcd_isalpha(int c) { return dcd_islower(c) || dcd_isupper(c); }
int dcd_isblank(int c) { return c == ' ' || c == '\t'; }
int dcd_iscntrl(int c) { return !dcd_isprint(c); }
int dcd_isdigit(int c) { return WITHIN(c, '0', '9'); }
int dcd_isgraph(int c) { return ' ' < c && c <= '~'; }
int dcd_islower(int c) { return WITHIN(c, 'a', 'z'); }
int dcd_isprint(int c) { return ' ' == c || dcd_isgraph(c); }
int dcd_ispunct(int c) { return dcd_isgraph(c) && !dcd_isalnum(c); }
int dcd_isspace(int c) { return dcd_isblank(c) || WITHIN(c, '\n', '\r'); }
int dcd_isupper(int c) { return WITHIN(c, 'A', 'Z'); }
int dcd_isxdigit(int c) { return dcd_isalnum(c) && c < 'g' && !WITHIN(c, 'G', 'Z'); }

int dcd_tolower(int c) { return dcd_isupper(c) ? (c + 'a' - 'A') : c; }
int dcd_toupper(int c) { return dcd_islower(c) ? (c + 'A' - 'a') : c; }
