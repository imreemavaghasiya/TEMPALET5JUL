#include<stdio.h>
#include<conio.h>

 main()

{
 int n,t,p,r=0;
 printf("Enter a Number = ");
 scanf("%d",&n);
 t=n;
 while(n>0)
   {
    p=n%10;
    r=r*10+p;
    n/=10;

   }
    printf("Reverse a Number = %d\n",r);

   if(t==r)
      {
       printf("Your Number is Palindrom\n");
      }
      else
      {
       printf("Your Number is not Palindrom\n");
      }



}
