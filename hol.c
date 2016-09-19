#include<stdio.h>
#include<conio.h>

void main()
{
int ch;
clrscr(); 
printf(“Enter number of week’s day(1-7):”);
scanf(“%d”,&ch);

switch(ch)
{
case 1: printf(“nSunday”);
printf("false");
break;
case 2: printf(“nMonday”);
printf("true");
break;
case 3: printf(“nTuesday”);
printf("true");
break;
case 4: printf(“nWednesday”);
printf("true");break;
case 5: printf(“nThursday”);
printf("true");
break;
case 6: printf(“nFriday”);
printf("true");
break;
case 7: printf(“nSaturday”);
printf("false");
break;
}
getch(); //to stop the screen
}
