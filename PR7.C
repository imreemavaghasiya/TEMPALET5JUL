#include<stdio.h>
#include<conio.h>
 main()

{
  int p,n1=0,n2=1,n3,i;
  printf("Enter a Value = ");
  scanf("%d",&p);
  for(i=2;i<=p;i++)
    {
     n3=n1+n2;
     printf("%d",n3);
     n1=n2;
     n2=n3;

    }

}
