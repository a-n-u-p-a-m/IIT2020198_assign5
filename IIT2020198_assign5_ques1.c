#include <stdio.h>

void space(int x)
{
	
	int i;
	for (i = 1; i < x; i++)
	{
		printf("\t");
	}

}

int main(void)
{
    
    int n;
   	float array[n];
   	int y;
   	printf("Enter array size\n");
   	scanf("%d",&n);

   	int x;
   	printf("Enter gap between elements\n");
   	scanf("%d",&x);

   	for (y = 0; y < n; y++)
   	{
   		printf("Enter array element\n");
   		scanf("%f",&array[y]);
   	}	

   	for (y = 0; y < n; y++)
   	{	
   		printf("%.2f",array[y]);
   		space(x);
   	}
   	
}