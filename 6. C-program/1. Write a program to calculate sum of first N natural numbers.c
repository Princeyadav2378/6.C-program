//1. Write a program to calculate sum of first N natural numbers
#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("Enter N Natural Number\n");
	scanf("%d",&n);
    for(i=1;i<=n;i++)
	sum=sum+i;
	printf("Sum of N Natural %d is =%d",n,sum);
	return 0;
}

