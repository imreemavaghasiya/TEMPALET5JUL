#include<stdio.h>
#include<conio.h>

 main()

{
  int a,n,f=1;
  printf("Enter a Number = ");
  scanf("%d",&n);
  for(a=1;a<=n;a++)
     {
       f=f*a;

     }
     printf("Fectorial = %d",f);


}
