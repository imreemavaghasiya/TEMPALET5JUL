#include<stdio.h>
#include<conio.h>

main()
{
  int p,count=0;
  printf("Enter a Value = ");
  scanf("%d",&p);
  while(p>0)
  {
   p=p/10;
   count++;
  }
  printf("Total Count Digit = %d",count);


}
