#include <stdio.h> 
#include <stdlib.h>
struct servitor

{ 
   char id[8],name[12];
   int hourly_pay,hours,payment;
}; 

void calc(struct servitor []); 
int main(void)

{
   struct servitor emp51[4];
   int i=0;
	   printf("                 輸出每個人的收入                \n");
	
   do { 
	   printf("請輸入第%d位的編號,姓名,時薪,工作時數:", i+1); 
       scanf(" %s %s %d %d", emp51[i].id, emp51[i].name, &emp51[i].hourly_pay, &emp51[i].hours);
       i++;
   } while (i<4);
   calc(emp51);
   printf("月收入總表：\n");
   for (i=0; i<4; i++)
      printf("編號：%s 姓名：%s　月收入: %d\n",emp51[i].id, emp51[i].name, emp51[i].payment);
   system("pause"); 
   return 0;
}

void calc(struct servitor p[])
{
    int i;
    for (i=0; i<4; i++)
       p[i].payment=p[i].hourly_pay*p[i].hours;
}

