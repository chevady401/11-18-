#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int lcm,a,b;
	a = 0;
	b = 0;
	printf("�п�J��ơG");
	scanf_s("%d %d", &a, &b);
	if (a > b)
		lcm = a;
	else
		lcm = b;
	while ((lcm % a != 0) || (lcm % b !=0))
	{
		lcm++;
	}
	printf("�����Ƭ��G%d", lcm);
}