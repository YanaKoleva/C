#include <stdio.h>
#include <stdio.h>

int main()
{
	int a;
	int b;
	
	printf("Enter number A:");
	scanf("%d", &a);

	printf("Enter number B:");
	scanf("%d",&b);

	int *pA;
	int *pB;

	pA = &b;
	pB = &a;

	printf("Number A: %d\n", *pA);
	printf("NUmber B: %d\n", *pB);

	return 0;
}
