/*
    File Type   : C Header
    Description : DCD implementation of the ctype library (ISO C17 Standard 7.4) 
                  used for character handling. Supports the ANSI ASCII character set
*/

#ifndef DCD_CTYPE_H_
#define DCD_CTYPE_H_

// Is (c)haracter alphanumeric
int dcd_isalnum(int c); 
// Is (c)haracter alphabetic (a-z, A-Z)
int dcd_isalpha(int c);
// Is (c)haracter blank (space or tab)
int dcd_isblank(int c);
// Is (c)haracter a control
int dcd_iscntrl(int c);
// Is (c)haracter a decimal digit (0-9)
int dcd_isdigit(int c);
// Does (c)haracter have a graphical representation (Non-control chars and not space)
int dcd_isgraph(int c);
// Is (c)haracter lower case alphabetic (a-z)
int dcd_islower(int c);
// Is (c)haracter printable (alphanumeric, punctuation and space)
int dcd_isprint(int c);
// Is (c)haracter punctuation
int dcd_ispunct(int c);
// Is (c)haracter a space type (tab, newline, vertical tab, form feed, carriage return, and space)
int dcd_isspace(int c);
// Is (c)haracter upper-case alphabetic (A-Z)
int dcd_isupper(int c);
// Is (c)haracter a a hexadecimal digit (0-9, a-z, or A-F)
int dcd_isxdigit(int c);

// Convert an uppercase alphabetical character to lowercase
int dcd_tolower(int c);
// Convert an lowercase alphabetical character to uppercase
int dcd_toupper(int c);

#endif
