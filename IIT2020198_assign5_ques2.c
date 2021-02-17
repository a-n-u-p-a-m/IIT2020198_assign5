#include <stdio.h>
#include <math.h>
#define PI 3.1416f

int factorial(int n)
{
	
	if (n==0)
	{
		return 1;
	}
	else return n*factorial(n-1);

}

float sine(float a,int n)
{
	if (a==0 || n==0)
	  return 0;
	else
		return (-1*pow(-1,n)*pow(a,2*n-1))/factorial(2*n-1) + sine(a,n-1);
}

int main(void)
{
	float degrees,radians,result;
	int n;
	printf("Enter the value in degrees\n");
	scanf("%f",&degrees);
	printf("Enter no. of terms in series\n");
	scanf("%d",&n);

	radians=(degrees*PI)/180;

	result=sine(radians,n);
	printf("The value of sine is %.3f\n",result);
}

