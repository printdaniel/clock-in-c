#include<stdio.h>
#include<conio.h>


void main(){
int h,m,s;
printf("Enter the current time in format hh mm ss \n");

printf("Enter hours");
scanf("%d",&h);

printf("Enter minutes");
scanf("%d",&m);

printf("Enter secunds");
scanf("%d",&s);

while (h<24)
{
 while (m<60)
 {
   while (s<60)
     {
     sleep(1);
     printf(" hh : mm : ss \n");
     s++;
     printf("%d : %d : %d\n",h,m,s);

     }
 m++;
 s=0;
 }
 h++;
 m=0;
}
getch();


}
