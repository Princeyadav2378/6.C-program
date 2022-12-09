//2. Write a program to calculate sum of first N even natural numbers
#include<stdio.h>
int main()
{
//	int i,n,sum=0;
//	printf("Enter N Natural Even Number\n");
//	scanf("%d",&n);
//    for(i=2;i<=n;i++)
//	sum=sum+i;
//	printf("Sum of N Natural Even Number %d is =%d",n,sum);
      int i=2,n,s=0;
      printf("Enter N Natural Even Number\n");
      scanf("%d",&n);
      while(i<=2*n){
      s=s+i;
      i=i+2;
  }
      printf("sum of %d",s);
	return 0;
}

