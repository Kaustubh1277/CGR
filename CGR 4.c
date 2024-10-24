//practical no 4
#include<stdio.h>
#include<graphics.h>
#include<math.h>
int main()
{
float pi;
int gd,gm,x,y,r;
printf("\nEnter the radius of circle-");
scanf("%d",&r);
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
x=0;
y=r;
pi=3-2*r;
do{
putpixel(100+x,100+y,15);
putpixel(100+y,100+x,15);
putpixel(100+x,100-y,15);
putpixel(100+y,100-x,15);
putpixel(100-x,100-y,15);
putpixel(100-x,100+y,15);
putpixel(100-y,100+x,15);
putpixel(100-y,100-x,15);
if(pi<=0)
{
pi=pi+4*x+6;
}
else
{
pi=pi+4*(x-y)+10;
y=y-1;
}
x=x+1;
}
while(x<y);
getch();
closegraph();
return 0;
}
