//10. Write a program to reverse a given numbers
#include<stdio.h>
int main()
{
	int i,n,reminder,reverse=0;
	printf("Enter two Number\n");
	scanf("%d",&n);
	while(n!=0)
	{
		reminder=n%10;
		n=n/10;
		reverse=reverse*10+reminder;
		
	}
	printf("Reverse is %d",reverse);
	return 0;	
}
