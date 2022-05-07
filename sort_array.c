#include <stdio.h>

int main()
{
	int n;
	int i;
	int j;

	printf("Enter numer for array:\n");
	scanf("%d", &n);
	
	int array[n];

	for(i=0;i<n;i++)
	{
		printf("Enter number:\n");
		scanf("%d", &array[i]);
	}

	for(j=0;j<n;j++)
	{
		for(i=0;i<n;i++)
		{
			if(array[j]<array[i])
			{
				array[i] = array[i] - array[j];
				array[j] = array[i] + array[j];
				array[i] = array[j] - array[i];
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("Number %d: %d\n", (i + 1), array[i]);
	}
	
	return 0;
}
