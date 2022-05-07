#include <stdio.h>

int main()
{
	int array[1];

	printf("Enter numer:\n");
	scanf("%d", &array[0]);
	
	printf("Enter number:\n");
	scanf("%d", &array[1]);

	array[0] = array[0] - array[1];
	array[1] = array[0] + array[1];
	array[0] = array[1] - array[0];
	
	
	printf("First number: %d\n", array[0]);

	printf("Second number: %d\n", array[1]);

	return 0;
}
