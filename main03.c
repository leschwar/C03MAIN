#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *ft_strncat(char *dest, char *src, unsigned int nb);

int main ()
{
	char a[100] = "Leopold";
	char b[] = "schwarz";
	printf("%s\n", ft_strncat(a, b, 4));
	printf("%s\n", strncat(a, b, 4));
}
