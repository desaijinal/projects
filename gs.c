#include<stdio.h>

main()
{
   int gs,bs,hra,da,ta;
   printf("enter value of bs=");
   scanf("%d",&bs);
   printf("enter value of hra=");
   scanf("%d",&hra);
   printf("enter value of da=");
   scanf("%d",&da);
   printf("enter value of ta=");
   scanf("%d",&ta);
   
   hra=bs*hra/100;
   da=bs*da/100;
   ta=bs*ta/100;
   
   gs=bs+hra+da+ta;
   printf("gross salary=%d",gs);
}