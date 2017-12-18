#include<graphics.h>
 
main()
{
   int gd = DETECT, gm;
 
   initgraph(&gd, &gm, "C:\\TC\\BGI");
   
 	int x=300,y=270;
 	outtextxy(x-200, y-200, "          National Flag Of Bangladesh");
 	outtextxy(x-150, y-150, "  				 BY   ");
 	outtextxy(x-100, y-100, "Muntakimur Rahaman");
 	setcolor(GREEN);
 	setfillstyle(SOLID_FILL, GREEN);
 	bar(150, 200, 400, 350);
 	
 	floodfill(150, 200, GREEN);
  	setcolor(RED);
     setfillstyle(SOLID_FILL, RED);
     circle(x, y,50);
     floodfill(x, y, RED);
   getch();
   closegraph();
   return 0;
}
