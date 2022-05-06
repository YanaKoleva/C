#include <stdio.h>
#include <stdio.h>

int main()
{
	int a;
	int b;
	
	printf("Enter number:");
	scanf("%d", &a);

	printf("Enter second number:");
	scanf("%d", &b);

	if(a>b)
	{
		printf("%d\n", a);
	}
	if(b>a)
	{
		printf("%d\n", b);
	}
	return 0;
}
