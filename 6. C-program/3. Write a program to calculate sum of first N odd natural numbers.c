//3. Write a program to calculate sum of first N odd natural numbers
#include<stdio.h>
int main()
{

      int i=1,n,s=0;
      printf("Enter N Natural odd Number\n");
      scanf("%d",&n);
      while(i<=n)
    {
       s=s+(2*i-1);
       i++;
     }
      printf("sum of %d",s);
	return 0;
}

