#include <stdio.h>

//Find the smallest number that is evenly divisible by all numbers from 1 to 20

int devision(int number, int reminder, int count)
{
	for(count=1;count<21;count++)
	{
		reminder = number % count;
		if(reminder!=0)
		{
			return 0;
		}
	}
	return number;
}

int check(int number,int reminder, int count)
{
	while(devision(number,reminder,count)==0)
	{
		number++;
	}
	if(devision(number,reminder,count)!=0)
	{
		return number;
	}
	else
	{
		return 0;
	}
}

void print(int N)
{
	printf("%d", N);
}

int main()
{
	int iNum = 1;
	int iLoop = 1;
	int iRem = 0;

	print(check(iNum,iRem,iLoop));

	return 0;
}

