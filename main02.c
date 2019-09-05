#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
	char a[100] = "Leopold";
	char b[] = " schwarz";
	printf("%s\n", strcat(a, b));
}
