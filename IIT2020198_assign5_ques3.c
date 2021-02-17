#include <stdio.h>

int fibonacci(int n)
{

	if (n==1 || n==2)
	{
		return 1;
	}
	else return fibonacci(n-1)+fibonacci(n-2);

}

int main(void)
{
    
    int n,i;
    printf("Enter an integer\n");
    scanf("%d",&n);

    printf("The Fibonacci series:\n");
    for (i = 1; i <= n; i++)
    {
    	printf("%d\t",fibonacci(i));
    }

}