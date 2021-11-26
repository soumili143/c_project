//digit summation.
#include<stdio.h>
int main()
{
	int n,d,x,sum=0;
	 printf("enter any number:");
	 scanf("%d",&n);
	 x=n;
	 while(n>0)
	  {
	  	d=n%10;
	  	sum= sum+d;
	  	n=n/10;
	  }
	  printf("%d sum of digits is:%d",x,sum);
	  return 0;
}
