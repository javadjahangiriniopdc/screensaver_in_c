#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>

int main()
{
  //randomize randome number
  srand(time(0));

  //clear screen with background white
  textbackground(15);
  clrscr();

  int x;
  int y;
  int co;


  while(1)
    {
      //set curses on x dimition
      x=rand()%100+1;
      //set curses on y dimistion
      y=rand()%25+1;

      gotoxy(x,y);

      //random color
      
      co=rand()%14+1;
      
      textcolor(co);
      cprintf("%c",'*');

      //delay
      usleep(10000);     

    }
  
  
  
  
  getch();
  return 0;
}
