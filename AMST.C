#include<stdio.h>
#include<conio.h>
void amst(int n);
void main()
{
	int n,temp,d,dsum;
	clrscr();
	printf("enter any no:");
	scanf("%d",&n);
	amst(n);
	getch();
}
void amst(int n)
{
       int dsum=0,temp=0,d,n;
	temp=n;
	while(n>0)
	{
		d=n%10;
		dsum+=(d*d*d);
		n/=10;

	}
	if(dsum==temp)
		printf("%d is an amstrong no",temp);
	else
		printf("%d is not amstrong no",temp);
}