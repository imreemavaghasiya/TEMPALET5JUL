#include<stdio.h>
#include<conio.h>

 main()

{
   int a,fd,ld,sum;
   printf("Enter You are Number = ");
   scanf("%d",&a);
   ld=a%10;
   while(a>=10)
    {
      a=a/10;
    }
    fd=a;
    sum=fd+ld;
    printf("First Num + Last Num = %d ",sum);

}
