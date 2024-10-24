//practical no 2
#include <graphics.h>
#include <math.h>
#include <stdio.h>
int main(){
float  x,y,x1,y1,x2,y2,dx,dy,len;
int i,gd=DETECT,gm;
clrscr();
printf("\nGet the coordinates of first point-");
scanf("%f%f",&x1,&y1);
printf("\nGet the coordinates of 2nd point x2,y2-");
scanf("%f%f",&x2,&y2);
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
dx=abs(x2-x1);
dy=abs(y2-y1);
if(dx>=dy){
len=dx;
}
else
{
len=dy;
}
dx=(x2-x1)/len;
dy=(y2-y1)/len;
x=x1+0.5;
y=y1+0.5;
i=1;
while(i<=len){
putpixel(x,y,WHITE);
x=x+dx;
y=y+dy;
i=i+1;
}
getch();
closegraph();
return 0;
}
