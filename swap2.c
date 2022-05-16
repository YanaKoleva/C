#include <stdio.h>
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

void swap(int *Num1, int *Num2, int *Temp)
{
	*Temp = *Num1;
	*Num1 = *Num2;
	*Num2 = *Temp;
}

int main()
{
	int FirstNumber ;
	int SecondNumber;
	int Temp;
	
	ask("Enter first number:");
	FirstNumber = getNum(FirstNumber);

	ask("Enter second number:");
	SecondNumber = getNum(SecondNumber);

	swap(&FirstNumber, &SecondNumber, &Temp);

	show("First number:", FirstNumber);
	show("Secnd number:", SecondNumber);

	return 0;
}
