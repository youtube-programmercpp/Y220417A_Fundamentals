#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	signed char a;
	short b;
	if (scanf("%hhd%hd", &a, &b) == 2) {
		printf("a = %d, b = %d\n", a, b);
	}
}
