// Adding numbers with recursion

#include <stdio.h>

int add(int iNum, int iLoopCount, int sum)
{
	if(iLoopCount > 0)
	{
		printf("Enter number to add:");
		scanf("%d", &iNum);

		sum = sum + iNum;

		iLoopCount--;

		add(iNum, iLoopCount, sum);
	}

	else
	{
		printf("Sum: %d\n", sum);
	}
}

int main()
{
	int iLoopCount;
	int iNum;
	int sum = 0;

	printf("How many numbers would you like to add:");
	scanf("%d", &iLoopCount);

	add(iNum, iLoopCount, sum);

	return 0;
}
