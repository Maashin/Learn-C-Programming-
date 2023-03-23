#include <stdio.h>
#include <math.h>
double a, b;
char choice;
double add(double a, double b)
{
	printf(":%f", a + b);
}

double sub(double a, double b)
{
	printf(":%lf", a - b);
}

double mul(double a, double b)
{
	printf(":%lf", a * b);
}

double div(double a, double b)
{
	printf(":%lf", a / b);
}

double mod(double a, double b)
{
	printf(":%lf", fmod(a, b));
}

int main()
{
	printf("\t*******************\n");
	printf("\t*simple calculator*\n");
	printf("\t*\tmaashin...*\n");
	printf("\t+, *, -, /, %");
	printf("\t*******************\n");
	int start = 1;
	while (start)
	{
		printf("\tChoose an operator\n");
		scanf("%c", &choice);
		// while(1){
		switch (choice)
		{
		case '+':
			printf("Enter first number\n");
			scanf("%lf", &a);
			printf("Enter second number\n");
			scanf("%lf", &b);
			add(a, b);
			break;
		case '*':
			printf("Enter first number\n");
			scanf("%lf", &a);
			printf("Enter second number\n");
			scanf("%lf", &b);
			mul(a, b);
			break;
		case '-':
			printf("Enter first number\n");
			scanf("%lf", &a);
			printf("Enter second number\n");
			scanf("%lf", &b);
			sub(a, b);
			break;
		case '/':
			printf("Enter first number\n");
			scanf("%lf", &a);
			printf("Enter second number\n");
			scanf("%lf", &b);
			div(a, b);
			break;
		case '%':
			printf("Enter first number\n");
			scanf("%lf", &a);
			printf("Enter second number\n");
			scanf("%lf", &b);
			mod(a, b);
			break;
		case 'E':
			start = 0;
		default:
			printf("choose a valid operator or \"E\" to exit\n");

		}
	}

	return 0;
}
