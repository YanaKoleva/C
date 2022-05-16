#include <stdio.h>

void ask(char *line)
{
	printf("%s\n", line);
}

int getNum(int Num)
{
	scanf("%d",&Num);
	return Num;
}

void createArray(int Num, int* array, int i)
{
	for(i=0;i<Num;i++)
	{
		ask("Enter number:");
		array[i] = getNum(array[i]);
	}
}

void swap(int j, int i, int n, int* array)
{
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
}



int main()
{
	int iNum;
	int i;
	int j;

	ask("Enter number of array:");
	iNum = getNum(iNum);

	int array[iNum];

	createArray(iNum, array, i);

	swap(j, i, iNum, array);

	for(i=0;i<iNum;i++)
	{
		printf("Number %d: %d\n", (i + 1), array[i]);
	}
	
	return 0;
}
