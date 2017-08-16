#include <stdio.h>
#include <math.h>


void typeCast(long);
int findNextMultiple(int ,int );
float convertFtoC(float);
int Round(double);

int main()
{

float x = 2.5;
long  li;
int i, n, t1 = 0, t2 = 1, nextTerm = 0;
int a,b,c;
float result;
double number = 0;
int roundednumber;

printf("\n\n\n\n\n\nHello World! \n\n\n\n");



printf("-----------------------------------------------------------------------Evaluate the following expression-------------------------------------------------------------------------\n");
printf("\nGiven Regular Expression: 3x^3 - 5x^2 + 6\n");
printf("\nGiven Value of x: 2.5\n");
printf("\nValue of the Regular Expression : ");
printf("%f", (3*(x*x*x))-(5*(x*x))+6);
printf("\n\n");


printf("-------------------------------------------------------------------------Round to the nearest integer----------------------------------------------------------------------------\n\n");

number = ((3*pow(10,8))+(2*pow(10,-7)))/((7*pow(10,-6))+(2*pow(10,8)));
printf("Given Expression :(3 × 10^8 + 2 × 10^-7) / (7 × 10^-6 + 2 × 10^8)\n\n");
printf("Actual Value: %lf",number);


number = number + 0.500000;;

printf("\n\nRounded Value: %d",(int)number);
printf("\n\n");

printf("\n---------------------------------------------------------------------------Find the Next Multiple--------------------------------------------------------------------------------");
printf("\n\ni = 365\t\tj = 7");
c = findNextMultiple(365,7);
printf("\n\nNext Multiple for the above values is %d.\n\n ",c);
printf("\ni = 12258\tj = 28");
c = findNextMultiple(12258,28);
printf("\n\nNext Multiple for the above values is %d.\n\n ",c); 
printf("\ni =996\t\tj = 4");
c = findNextMultiple(996,4);
printf("\n\nNext Multiple for the above values is %d. ",c);
printf("\n\n");



printf("-------------------------------------------------------------------convert from degree Fahrenheit to degree celsius--------------------------------------------------------------\n\n");
result = convertFtoC(27);
printf("when we convert 27 degree fehrenheit to degree celsius we get: %f",result);




printf("\n\n-------------------------------------------------------------------Convert a Long int to int, double and char--------------------------------------------------------------------\n");

typeCast(402354);



printf("\n\n---------------------------------------------------------------------------Fibonacci Series-------------------------------------------------------------------------------------\n\n");
  //    printf("Enter the number of terms you want in the Fibonacci series:  ");
  //    scanf("%d",&n);

    printf("\nFirst 20 numbers in the Fibonacci Series are: %d, %d, ", t1, t2);

    // i = 3 because the first two terms are already dislpayed and are the same everytime.
    for (i=3; i <= 20; ++i)
    {
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        printf("%d, ",nextTerm);
    }

printf("\n\n--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");



return 0;
}



void typeCast(long val)
{
	printf("\nLong int : %d", val);
	printf("\n\nLong int typecasted to int: ");	
	printf("%d", (int)val);
	printf("\n\nLong int typecasted to double: ");
	printf("%lf", (double)val);
	printf("\n\nLong int typecasted to char: ");
	printf("%c", (char)val);
	printf("\n\n");

}  

int findNextMultiple(int a, int b)
{

	int next_multiple;
	next_multiple = ((a+b)-(a%b));
	return next_multiple;

}

float convertFtoC(float fahrenheit)
{

	float celsius;
	celsius = ((fahrenheit - 32)/1.8);
	return celsius;

}


int Round(double number)
{
    if(number > 0)
	{

	number = number + 0.5;
printf("%d",number);
	}

    else
       {
	number = number - 0.5;
       }
return (int)number;
}



























































