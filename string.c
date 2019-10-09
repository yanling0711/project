#include <stdio.h>
<<<<<<< HEAD
size_t my_strlen(char *s)
=======
int my_strlen(char *s)
>>>>>>> d18f563dcbe0d4977743afeceacf23662b600bde
{
	char *p = s;
	while (*p) ++p;
	return (p - s);
}

int main(void) {
	int i;

	char *s[] = {
		"Git tutorials", "Hello World"
	};
	for (i = 0; i < 2; ++i)
		printf("string lenght of %s = %d\n", s[i], my_strlen(s[i]));
	
	return 0;
}