//7. Write a program to count digits in a given number
#include<stdio.h>
int main()
{
	int n,Count=0;
	printf("Enter digits of given number\n");
	scanf("%d",&n);
	while(n!=0)
	{
	n=n/10;
	Count++;
    }
	printf("Count digit of given number is=%d",Count);
	return 0;
}
