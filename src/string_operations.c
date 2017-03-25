#include <stdio.h>
#include <wchar.h>

size_t w_strlen(const wchar_t *s)
{
    const wchar_t *p= s ;

   while (*p)
      ++p;

   return (p - s);
}

char *my_strcpy(char *t, char *s)
{
	char *p = t;

	while (*t++ = *s++)
		;


		return p;

int main(void)
{
   int i;
   char p1[32];
   char *s[] = 
   {
      "Git tutorials",
      "Tutorials Point"
   };

   for (i = 0; i < 2; ++i)
      
   printf("string lenght of %s = %d\n", s[i], my_strlen(s[i]));
   printf("%s\n", my_strcpy(p1, "Hello, World !!!"));
   return 0;
}
 
--from tom
 


--by jerry
-- implements the strcat function
-- implements a function to return the string length of wide character string