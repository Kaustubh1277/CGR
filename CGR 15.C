//practical no 15
#include<stdio.h>
#include<graphics.h>
#include<math.h>
void bezier(int x[4],int y[4]);
void main()
{
    int gd=DETECT,gm,i;
    int x[4],y[4];
    initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
    for(i=0;i<4;i++)
    {
	printf("\nEnter x y: ");
	scanf("%d%d",&x[i],&y[i]);
    }
    bezier(x,y);
    getch();
    closegraph();
}
void bezier(int x[4],int y[4])
{
    double A,B,u;
    for(u=0.0;u<=1.0;u+=0.0005)
    {
	 A=x[0]*pow((1-u),3)+x[1]*3*u*pow((1-u),2)+x[2]*3*pow(u,2)*(1-u)+x[3]*pow(u,3);
	 B=y[0]*pow((1-u),3)+y[1]*3*u*pow((1-u),2)+y[2]*3*pow(u,2)*(1-u)+y[3]*pow(u,3);
	 delay(1);
	 putpixel(A,B,WHITE);
    }
}
