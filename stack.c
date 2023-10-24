#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
int stack[50],m,a,choice,top,i,size=5;
void push();
void pop();
void display();
void count();
void main()
{
  clrscr();
  printf(" 1:PUSH\n 2:POP\n 3:DISPLAY\n 4:COUNT\n 5:EXIT\n");
  do
  {
    printf("\nENTER YOUR CHOICE:  ");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1:push();
	   break;
      case 2:pop();
	   break;
      case 3:display();
	   break;
      case 4:count();
	   break;
      case 5:exit(0);

      default:
	    printf("WRONG CHOICE");
    }
  }while(2>1);
  getch();
}
void push()
{
  if(top==size-1)
  {
    printf("STACK IS FULL");
  }
  else
  {
    top=top+1;
    printf("ENTER THE ELEMENT:  ");
    scanf("%d",&a);
    stack[top]=a;
  }
}