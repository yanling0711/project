#include <stdio.h>
/*20191009*/
size_t my_strlen(char *s)
{
	char *p = s;
	while (*p) ++p;
	return (p - s);
}
char *my_strcpy(char *t, char *s)
{
	char *p = t; 
	while (*t ++ = *s ++);
	return p;
}
int main(void) {
	int i;

	char *s[] = {
		"Git tutorials", "Hello World"
	};
	for (i = 0; i < 2; ++i)
		printf("string lenght of %s = %d\n", s[i], my_strlen(s[i]));

        printf("%s\n", my_strcpy(p1, "Hello, World !!!"));
	
	return 0;
}