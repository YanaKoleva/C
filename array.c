#include <stdio.h>

void showValues(int i, int *array[5], int arrayMax)
{
	for(i=0;i<arrayMax;i++)
		{
			printf("%d\n",array[i]);
		}
}

int main()
{
	
	int array[5];
	int i;
	
	array[0] = 4;
	array[1] = 3;
	array[2] = 1;
	array[3] = 58;
	array[4] = -19865;

	showValues(i, &array[5], 5);

	return 0;
}
