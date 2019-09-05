#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *ft_strstr(char *str, char *to_find);

int main ()
{
	char a[100] = "Leopold";
	char b[] = "Leoa";
	printf("%s\n", ft_strstr(a, b));
	printf("%s\n", strstr(a, b));
}
