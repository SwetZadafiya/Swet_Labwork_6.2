// Write a programme to print 1 to 10 using a do while loop.

#include<stdio.h>
#include<conio.h>

void main(){
int a=1;
clrscr();
do{
  printf("%d\n",a);
  a++;
}while(a<=10);

getch();
}