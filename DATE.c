#include<stdio.h>
int main (void)
{ int year, day, month;
  printf("请输入年：");
  scanf("%d",&year);
  printf("请输入月：");
  scanf("%d",&month);
  printf("请输入日：");
  scanf("%d",&day);
  {
  int x, y, z, a, n;
  x=1;
  n=0;
  
  while (year - 4 * x > 0)
  x = x + 1;
{if (year - 4 * x == 0)    //闰年
    {if (month == 1)
       z = 0;
     else if (month == 2)
	   z = 31;
	 else if (month == 3)
	   z = 60;
	 else if (month == 4)
	   z = 91;
	 else if (month == 5)
	   z = 121;
	 else if (month == 6)
	   z = 152;
	 else if (month == 7)
	   z = 182;
	 else if (month == 8)
	   z = 213;
	 else if (month == 9)
	   z = 244;
	 else if (month == 10)
	   z = 274;
	 else if (month == 11)
	   z = 305;
	 else if (month == 12)   
       z = 335;
   y = 366 * ( x - 1 ) + 365 * (year - x) + z + day ;     //y为总天数 
   {
   while (y - 7 * n >= 7)
   n = n + 1;
   a = y - 7 * n;
   if (a == 0) 
   printf("星期六");
   if (a == 1) 
   printf("星期天");
   if (a == 2) 
   printf("星期一");
   if (a == 3) 
   printf("星期二");
   if (a == 4) 
   printf("星期三");
   if (a == 5) 
   printf("星期四");
   if (a == 6) 
   printf("星期五");
   }}
else                      //非闰年 
  {if (month == 1)
       z = 0;
     else if (month == 2)
	   z = 31;
	 else if (month == 3)
	   z = 59;
	 else if (month == 4)
	   z = 90;
	 else if (month == 5)
	   z = 120;
	 else if (month == 6)
	   z = 151;
	 else if (month == 7)
	   z = 181;
	 else if (month == 8)
	   z = 212;
	 else if (month == 9)
	   z = 243;
	 else if (month == 10)
	   z = 273;
	 else if (month == 11)
	   z = 304;
	 else if (month == 12)   
       z = 334;
   y = 366 * ( x - 1 ) + 365 * (year - x) + z + day ;     //y为总天数 
   {
   while (y - 7 * n >= 7)
   n = n + 1;
   a = y - 7 * n ;
   if (a == 0) 
   printf("星期六");
   if (a == 1) 
   printf("星期天");
   if (a == 2) 
   printf("星期一");
   if (a == 3) 
   printf("星期二");
   if (a == 4) 
   printf("星期三");
   if (a == 5) 
   printf("星期四");
   if (a == 6) 
   printf("星期五");
   }}
  return 0;} 
}} 

