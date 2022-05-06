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

	int tmp;
	tmp = *(&a);
	*(&a) = *(&b);
	*(&b) = tmp;

	printf("Number A: %d\n", a);
	printf("NUmber B: %d\n", b);

	return 0;
}
