#include<stdio.h>
#include<conio.h>
Void main()
{
int i,j;
clrscr();
for(i=1;i<=5;i++)
{
for(j=1;j<=5;j++)
{
if(j<=i)
{
Printf("01");
}
else
{
Printf(" ");
}
}
Printf("\n");
}
getch();
}
