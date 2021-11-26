//Write a  c program to whether the user given  number is Prime or not.  (Prime number is a natural number greater than 1 that has no positive divisor greater than 1 and itself.)
#include<stdio.h>
 main()
{
	int i,n,flag=1;
	  printf("enter any number:");
	  scanf("%d",&n);
	 for (i=2;i<=n/2;i++)
	 {
	 	if(n%i==0)
	 	{
	 		flag=0;
	 		break;
		 }
	 }

	 if(flag==1)
	      printf(" \n number is prime");
	 else
	      printf(" \n number is not prime");		       
}
	  

