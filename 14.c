//WAP Average of the numbers between 1 to 100 using pointers.
#include <stdio.h>
int main()
{
	int i, *n, fix=1;
	float avg, sum=0;

	n=&i;

	printf("\nPrinting First 100 Positive Numbers [1-100]\n\n");
	for(i=1;i<=100;i++)
	{
		if(i<=10)
		{
			printf("%.2d  ", *n);
			sum+=*n;
		}

		if(i>10)
		{
			if((i+fix)%11==0)
			{
				printf("\n");
				fix++;
			}
			else if(i==11)
				printf("\n");

			printf("%.2d  ", *n);
				sum+=*n;	
		}
	}
	avg=sum/100;
	printf("\n\nAvarage: %.1f", avg);
}
