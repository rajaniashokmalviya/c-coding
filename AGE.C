#include<stdio.h>
#include<conio.h>
void vote();
void main()
{
int age;
char nm[20];
clrscr();
printf("Enter person name\n");
scanf("%c",&nm);
printf("Enter person age\n");
scanf("%d",&age);
vote();
getch();
}
void vote()
{
	int age;
	if(age>=18)
	printf("Eligible for voting");
	else
	printf("Not eligiblr for voting");

}