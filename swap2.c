#include <stdio.h>
#include <stdlib.h>

int main()
{
    int FirstNumber;
    int SecondNumber;

    printf("Enter first number:\n");
    scanf("%d", &FirstNumber);

    printf("Enter second number:\n");
    scanf("%d", &SecondNumber);

    int Temp;
    Temp = FirstNumber;
    FirstNumber = SecondNumber;
    SecondNumber = Temp;

    printf("First number: %d\n", FirstNumber);
    printf("Second number: %d\n", SecondNumber);

    return 0;
}
