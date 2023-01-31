#include <stdio.h>
#include <windows.h>

void display_border();

COORD c = {0, 0};
void setxy (int x, int y)
{
 c.X = x; c.Y = y; // Set X and Y coordinates
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

int main() 
{ 
 int batx=15,baty=13, ballx=25, bally=7;
 int x=25, y=10, ch1, ch2, b;
  
 setxy(14,1);
 printf("...Find The Ball...") ;
 display_border();
 
 setxy(batx, baty);
 printf("===");
 
 setxy(ballx, bally);
 printf("%c",2);
 
 ch1 = getch(); 
 ch2 = 0;

/*When accepting arrow key, function must be called twice; first call returns 0/0xE0; second call returns actual key code.*/
  
 if (ch1 == 0xE0) 
 {  
   while(ch2=getch())
   {
  if(ch2 == 'X') exit(0);
  if(ch2 == 75)//Left
  {
    if(batx>11) //Restrict bat on left side wall
    {
   setxy(--batx,baty);
   printf("===");     
   setxy(batx+3,baty);//Space to clear bat route
   printf(" ");
    }
  }
    if(ch2 == 77) //Right
    {
   if(batx<37)//Restrict bat on right side wall
   {
      setxy(++batx,baty);
     printf("===");
     setxy(batx-1,baty);//Space to clear bat route
     printf(" ");
   }
    }   
    if(ch2 == 72) //Up
    {
   if(baty>6)
   {
     setxy(batx,--baty);
     printf("===");
     setxy(batx,baty+1);
     printf("   ");
   } 
    }
    if(ch2 == 80) //Down
    {
   if(baty<14)
   {
     setxy(batx,++baty);
     printf("===");
     setxy(batx,baty-1);
     printf("   ");
   } 
    }
    if(batx==ballx-1 && baty==bally)
    {
   setxy(ballx-9,bally+4);
   printf("...Congratulations...");
   setxy(ballx-9,bally+5);
   printf("  ...Ball Found..");
   setxy(ballx-9,bally+6);
   printf("   ...Game Over..");
   getch();
   exit(0);
    }    
  }
 } 
 getch();
 return 0; 
}

void display_border()
{
 int i, j;
 //Top border line...
 setxy(10,5); 
 for(j=0; j<30; j++)
  printf("%c", 223);
 
 //Bottom border line... 
 setxy(10,15);
 for(j=0; j<=30; j++)
  printf("%c", 223);
 
 //Left and Right border line...
 for(j=0; j<10; j++)
 {
  setxy(10,5+j);
  printf("%c",219);
  
  setxy(40,5+j);
  printf("%c",219);
 }
 printf("\n");
}