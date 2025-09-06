/*
Armstrong Number Checker
Copyright (c) 2025 Shaurya Sambyal
Licensed under the MIT License
*/

#include<stdio.h>
#include<math.h>
int main ()
{
	int i1;
	printf("this code tells the user all the armstrong numbers from 1 to 1000000000");
	for(i1=0;i1<1000000000;i1++)
	{
		int e;
		int n=0;
		int a=i1;
		int i,k=0;;
	do 
	{
		e=a/pow(10,n);
		n++;
		
	}
		while(e>0);
		int z[n-1];
			for (i=0;i<n-1;i++)
		{
			int j = (a/pow(10,i+1));
			z[i]=a/pow(10,i)-j*10;
		}
			for (i=0;i>n-1;i++)
		{
			printf("%i",z[i]);
		}
		
		for (i=0;i<n-1;i++)
	{
		k+=pow(z[i],n-1);
	}
	if (k==a)
	{
		printf("the provided number '%i' is indeed an armstrong number\n",k);
	}
	
	}
}
