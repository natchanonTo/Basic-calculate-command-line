#include <stdio.h>

double calculate(double num1 ,double num2 ,char operator){
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
			printf("Error: Division by zero is not allowed.\n");
			return 0;
		}
		break;
	
	default:
		printf("Invalid operator\n");
		return 0;
	}
	
	return result;
};

int main (){

	double num1, num2, result;
	char operator,choice;
	
	do{

		printf("Input your number 1\n");
		scanf("%lf",&num1);
	
		getchar();

		printf("Input your operator (+,-.*,/)\n");
		scanf("%c",&operator);
	
		printf("Input your number 2\n");
		scanf("%lf",&num2);

		result = calculate(num1, num2, operator);

		printf("The result = %.2f\n",result);

		printf("Do you want to perform another calculation? (y/n): \n");
        scanf(" %c", &choice);
	
	} while(choice=='y' || choice=='Y');

	return 0;
};
