#include <stdio.h>
int main()
{
	printf("%5d%5d\n", 1, 2);	//Right Align
	printf("%5d%5d\n", 10, 20);	//Right Align
	printf("\n\n\n");
	printf("%-5d%-5d\n", 1, 2);	//Left Align
	printf("%-5d%-5d\n", 10, 20);	//Left Align
	return 0;
}

