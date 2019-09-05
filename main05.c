#include <stdio.h>
#include <string.h>
#include <stdlib.h>
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main ()
{
	char a[100] = "Leopold";
	char b[] = "schwarz";
	printf("%u\n", ft_strlcat(a, b, 4));
	printf("%lu\n", strlcat(a, b, 4));
}
