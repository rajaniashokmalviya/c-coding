#include<stdio.h>
#include<conio.h>
void prime(int n);
void main()

	{
	   int n;
	   clrscr();
	   printf("Enter any no :");
	   scanf("%d",&n);
	   prime(n);
	   getch();
	}

void prime(int n)
{
	int i,c=0;
	for(i=2;i<n-1;i++)
	{
	   c=0;
	   if(n%i==0)
	   c++;
	   break;
	}

	if(c==0)
	printf("Entered no is prime");
	else
	printf("Entered no is not prime");
}