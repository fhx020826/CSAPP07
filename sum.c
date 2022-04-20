#include <stdio.h>
#include <stdlib.h>
// 去掉endbr64     gcc-fcf-protection=none -mmanual-endbr

int ssum(int x1,int x2,int x3,int x4,int x5,int x6,int x7,int x8)
{
    return x1+x2+x3+x4+x5+x6+x7+x8;
}

int sum(int arr[],int n)
{
   int res=0;
   int i;

   for(i=0;i<n;i++)
         res+=arr[i];

//   for(i=n-1;i>=0;i--)
         //res+=arr[i];

   return res;
}

void swap(int *x, int *y)
{
	int t;

	t = -(*y);
	(*y) =- (*x);
	(*x) = t;
}


void swape(int *x, int y)
{
	int t;

	t = y;
	y = (*x);
	(*x) = t;
}


void swapb(int x, int y)
{
	int t;

	t = y;
	y = x;
	x = t;
}

int absi(int n)
{
    if(n<2)
       n=-n;
    return  n;
}


int logicval(int n)
{
    if(n!=0)
       n=1;
    return  n;
}

int  ti(int n)
{
    if(n>100)
       n=100;
    else if(n<-100)
       n=-100;
    return  n;
}

float f1=0.1;
float f2=-0.1;
float f3=0.2;
float f4=-0.2;


int m=3;

int res=0;
int main()
{
   int a[10]={1,2,3,4,5,6,7,8,9,10};
    FILE *fd;

//    m=m/res;
    m=absi(-10);
    res=sum(a,10);


    fd=fopen("test.txt","wt");
    if(fd==NULL)
    {
       printf("Error open file test.txt\n");
       exit(1);
    }
    //res=dup2(fd,1);
    for(int i=0;i<10;i++)
      fprintf(fd,"%d\t",a[i]);
    fclose(fd);
    exit(0);
    while(1)
    {
       printf("Go!!");
    }
    int i=0;
    do
    {
         res+=i;
         i++;
    }while(i<100);


    switch(m)
    {
       case 0:  printf("zero!\n");  break;
       case 1:  printf("one!\n");   break;
       case 2:  printf("two!\n");   break;
       case 3:  printf("three!\n"); break;
       case 4:  printf("four!\n");  break;
       default: printf("other!\n"); break;
    }
    return 0;
}


int main2()
{
    int x = 100;
    int y = -2;
    int i=0;
    int j=-100;
    int a[10]={1,2,3,4,5,6,7,8,9,10};

    printf("%d\n",absi(y));

    i=sum(a,10);
    printf("%d\n",i);

    printf("%d\n",ssum(1,2,a[3],a[4],x,m,-10,0));

    printf("%d\n",ti(j));
    m=m*y*j;

    switch(m)
    {
       case 2:  printf("zero!\n");break;
       case 4:  printf("one!\n");break;
       case 6:  printf("two!\n");break;
       case 8:  printf("three!\n");break;
       case 10:  printf("four!\n");break;
       case 12:  printf("five!\n");break;
       default: printf("other!\n");break;
    }

     printf("%d\n",absi(j));
     printf("%d\n",logicval(j));

    printf("%d\n",(i++) + (i++) + (i++));
    i=0;
    printf("%d\n",(++i) + (++i) + (++i));


    printf("%lf %lf %lf %lf\n",f1,f2,f3,f4);
    printf("Sum result:%d \n",sum(a,10));

	swap(x, y);


	printf("x:%d	y:%d\n", x,y);
	getchar();
	return 0;
}
