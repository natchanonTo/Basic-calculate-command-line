#include <stdio.h>

void calculate(double num1 ,double num2 ,char operator);

int main (){
	double num1, num2;
	char operator;
	
	printf("Input your number 1\n");
	scanf("%lf",&num1);
	
	getchar();

	printf("Input your operator (+,-.*,/)\n");
	scanf("%c",&operator);
	
	printf("Input your number 2\n");
	scanf("%lf",&num2);
	
	calculate(num1, num2, operator);

	return 0;
};

void calculate(double num1 ,double num2 ,char operator){
	double result;

	switch (operator)
	{
	case '+':
		result = num1 + num2;
		break;
	case '-':
		result = num1-num2;
		break;
	case '*':
		result = num1*num2;
		break;
	case '/':
		if (num2 != 0){
			result = num1/num2;
		} else{
			printf("Error");
		}
		break;
	
	default:
		printf("Invalid operator");
		break;
	}

	printf("The result = %.2f",result);
};