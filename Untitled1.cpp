#include<graphic.h>
#include<stdio.h>
#include<conic.h>

void  main()
{
	int gdriver = DETECT, gmode;
	
	initgraph(&gdriver, &gmode, "C:\\TC\\BGI");
	
	setcolor(BLUE);
	circle(50,50,2);
	setcolor(RED);
	outtextxy(50,50,"(50,50)");
	
	setcolor(BLUE);
	circle(100,100,2);
	setcolor(RED);
	outtextxy(100,100,"(100,100)");
	
	setcolor(BLUE);
	circle(250,100,2);
	setcolor(RED);
	outtextxy(250,100,"(250,100)");
	
	setcolor(BLUE);
	circle(300,400,2);
	setcolor(RED);
	outtextxy(300,400,"(300,400)");
	
	setcolor(BLUE);
	circle(500,200,2);
	setcolor(RED);
	outtextxy(500,200,"(500,200)");
}
