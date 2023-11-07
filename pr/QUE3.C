#include<stdio.h>
#include<conio.h>

void main()
{
      int n,ld,fd,sum=0;

      clrscr();

      printf("\n enter the number :");
      scanf("%d",&n);

      ld=n%10;

      while(n>=10)
      {
      fd=n/10;
      n=n/10;

      }
      sum=ld+fd;
      printf("sum of the first and last digit %d :",sum);
      getch();
}