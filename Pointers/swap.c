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
	int a;
	int b;
	
	ask("Enter number A:");
	a = getNum(a);

	ask("Enter number B:");
	b = getNum(b);

	swap(&a, &b);

	show("Number A:", a);
	show("Number B:", b);

	return 0;
}
