#include<stdio.h>

void main()
{
     int i;
     clrscr();
     for(i = 1; i <= 80; i++)

     {
	gotoxy(i,1);
	printf("*",i);
	gotoxy(i,24);
	printf("*",i);
     }

     for(i = 1; i <= 24; i++)
     {
	gotoxy(1,i);
	printf("*",i);
	gotoxy(80,i);
	printf("*",i);
     }
     for(i = 3; i <= 78; i++)
     {
	gotoxy(i,3);
	printf("*",i);
	gotoxy(i,22);
	printf("*",i);
     }

     for(i = 3; i <= 22; i++)
     {
	gotoxy(3,i);
	printf("*",i);
	gotoxy(78,i);
	printf("*",i);
     }






     getch();
}