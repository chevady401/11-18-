#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char a;
	printf("��J�@�ӭ^��r���G");
	scanf_s("%c", &a);
	if (a >91)
	{
		a = a - 32;
	}
	else
	{
		a = a + 32;
	}
	printf("%c",a );
}