#include <stdio.h>

void ask(char *line)
{
	printf("%s\n", line);
}

void show(char *line, int a)
{
	printf("%s %d\n", line, a);
}

int getNum(int Num)
{
	scanf("%d", &Num);
	return Num;
}

void swap(int *Num1, int *Num2)
{
	*Num2 = *Num2 - *Num1;
	*Num1 = *Num1 + *Num2;
	*Num2 = *Num1 - *Num2;
}
int main()
{
	int array[1];

	ask("Enter numer:");
	array[0] = getNum(array[0]);
		
	ask("Enter number:");
	array[1] = getNum(array[1]);

	swap(&array[0], &array[1]);
	
	
	show("First number:", array[0]);

	show("Second number:", array[1]);

	return 0;
}

