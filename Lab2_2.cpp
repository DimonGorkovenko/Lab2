#include <stdio.h>

int main()
{
	printf("Enter number a: ");
	int a, i;
	scanf_s("%d", &a);
	for (i = a; i <= 1000000; i = i * i + 1) {}
	printf("%d\n", i);
	return 0;
}
