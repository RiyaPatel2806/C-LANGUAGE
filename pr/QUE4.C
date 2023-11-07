#include<stdio.h>
#include<conio.h>

void main()
{
      int n,mul=1,sum=0,r;

      clrscr();

      printf("\n enter the number :");
      scanf("%d",&n);

      while(n!=0)
      {

      r=n%10;
      sum+=r;
      mul*=r;

      n=n/10;
      }
      if(sum==mul)
      {
	   printf("this is magic num :");
      }
      else
      {
	    printf("this is not magic num! :");

      }

      getch();
}




