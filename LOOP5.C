#inclu\de<stdio.h>
#include<conio.h>
void main()
{
int i,n;
clrscr();
printf("ENTER YOUR NUMBER==>");
scanf("%d",&n);
i=15;
do
{
 if(i%2==0)
 {
 printf("even");
 }
printf("%d\n",i);
i--;
}while(i>=n);
 getch();
}