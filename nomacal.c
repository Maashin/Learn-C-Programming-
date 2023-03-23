#include<stdio.h>



int main()
{

	// variable to hold true in the while loop
	int start = 1;
	// variable to hold entered numbers
	int a, b;
	// variable to hold arithmetic sign
	char operator;
	// take input from keyboard
	scanf("%d\n%c\n%d", &a, &operator, &b);
	// conditionals to determine the operation
	if (operator == '+')
	{
		printf("= %d", a + b);
	}
	else if (operator == '-')
	{
		printf("= %d", a - b);
	}
	else if (operator == '*')
	{
		printf("= %d", a * b);
	}
	else if (operator == '/')
	{
		printf("= %d", a / b);
	}
	else if (operator == '%')
	{
		printf("= %d", a % b);
	}
	else
	{
		printf("This calculator program can only do, add, sub, mul, div and modulus");
	}

	return 0;
}
