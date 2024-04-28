#include <stdio.h>



int main()
{
	choice();
	return 0;
}

int choice(void)
{
	int num;
	puts("1 - switch case; 2 - pointer");
	scanf("%d", &num);
	switch (num)
	{
	case 0:
		exit(0);
	case 1:
		switchcase();
		choice();
	case 2:
		pointer();
		choice();
	default:
		break;
	}
}

int operations(char o)
{
	float a, b;
	if (o != '+' && o != '-' && o != '*' && o != '/' && o != '0')
	{
		puts("\nerror");
		switchcase();
	}
	puts("enter the first number: ");
	scanf("%f", &a);
	puts("enter the second number: ");
	scanf("%f", &b);
	switch (o)
	{
	case '0':
		exit(0);
	case '+':
		printf("\n%g + %g = %g\n", a, b, (a + b));
		switchcase();
	case '-':
		printf("\n%g - %g = %g\n", a, b, (a - b));
		switchcase();
	case '*':
		printf("\n%g * %g = %g\n", a, b, (a * b));
		switchcase();
	case '/':
		if (b == 0)
		{
			puts("cannot be divided by 0");
			switchcase(); 
		}
		else
		{
			printf("\n%g / %g = %g\n", a, b, (a / b));
			switchcase();
		}
	}
}

int switchcase()
{
	char o;
	puts("\nwhat you want to do?");
	puts("enter:\n+ to add up;\n- to subtract;\n* to multiply;\n/ to divide;\n 0 to exit;\n");
	while (10 > 0)
	{
		scanf("%s", &o);
		operations(o);
	}
}

int addup(float a, float b)
{
	return (a + b);
}

int subtract(float a, float b)
{
	return (a - b);
}

int multiply(float a, float b)
{
	return (a * b);
}

int divide(float a, float b)
{
	if (b == 0)
	{
		puts("cannot be divided by 0");
	}
	else
		return (a / b);
}

int pointer() 
{
	char o;
	float a, b,c;
	float (*operation[])(float, float) = { ['+'] = addup,['-'] = subtract,['*'] = multiply,['/'] = divide };
	while (10 > 0)
	{
		puts("\nwhat you want to do?\n");
		scanf("%s", &o);
		if (o != '+' && o != '-' && o != '*' && o != '/' && o != '0')
		{
			puts("\nerror");
			pointer();
		}
		if (o == '0')
		{
			exit(0);
		}
		puts("\nenter the first number: ");
		scanf("%f", &a);
		puts("enter the second number: ");
		scanf("%f", &b);
		c = operation[o](a, b);
		if (o == '+')
		{
			printf("\n%g + %g = %g\n", a, b, c);
		}
		if (o == '-')
		{
			printf("\n%g - %g = %g\n", a, b, c);
		}
		if (o == '*')
		{
			printf("\n%g * %g = %g\n", a, b, c);
		}
		if (o == '/')
		{
			if (b != 0)
			{
				printf("\n%g / %g = %g\n", a, b, c);
			}
			else
				puts("error");
		}
	}
	
	

}