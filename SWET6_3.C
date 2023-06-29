// Write a programme to print even numbers from 1 to N using a do while loop.

#include<stdio.h>
#include<conio.h>

void main(){

int a,b=1;

clrscr();

printf("Enter any Number : ");
scanf("%d",&a);

do{
 if(b%2==0){
 printf("%d\n",b);
 }b++;
}while(a>=b);

getch();
}