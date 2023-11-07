#include<stdio.h>
#include<conio.h>

void main()
{
      int n;
      int count=0;
      clrscr();

      printf("\n enter the number :");
      scanf("%d",n);

      while(n!=0)
      {
      n=n/10;
      count++;

      }
      printf("count %d",count);
      getch();
}