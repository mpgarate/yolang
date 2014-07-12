#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define PRINT_YO(s) printf("%s: YO\n", make_username((char *)s));

char *covertToUpper(char *s){
    char *newstr, *p;
    p = newstr = strdup(s);
	*p = toupper(*p);
    while(*++p=toupper(*p));

    return newstr;
}

void remove_spaces(char* s)
{
  char* i = s;
  char* j = s;
  while(*j != 0)
  {
	*i = *j++;
	if(*i != ' ')
	  i++;
  }
  *i = 0;
}

char* make_username(char* s){
	s = covertToUpper(s);
	remove_spaces(s);
	return s;
}

void YO(const char* s){
	PRINT_YO(s);
}

void YO(){
	PRINT_YO("SYSTEM");
}
