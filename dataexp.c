#include <stdio.h>
#include <stdlib.h>

int x=-100;
float f=-0.1;
char *s="Hello World!\n";
int y= (-100*2) >> 2;

short int si=0;
long int li=-1;
unsigned int ui=1;

//int z=y*2;  错误的

int main()
{
    int m = 100;
    int n = -2 *5;
    int p= m+1;
    static int w=-2;

    x=-y;
    x=x-w;
    y=x++;
    y=++x;
    y=x+w;
    y=x%w;
    y=x*w;
    y=x/w;
    y+=x;

    printf("%d  %d\n",sizeof(f),sizeof(li));

    x=si;
    si=y;
    li=n;
    m=li;

    ui=w;
    p=ui;

    w=w << 5;
    w=w*m;

    printf("%d  %f  %s  %d\n",x,f,s,y);
    printf("%d  %d  %d %d\n",m,n,p,w);

	return 0;
}
