#include<stdio.h>
#include<math.h>
main()
{
	int f,k,m,c,d,r,x,y,z;
	float X,Y,Z;
	printf("day of month:\n");
	scanf("%d",&k);
	printf("month no.:\n");
	scanf("%d",&m);
	printf("first 2 digits of year:\n");
	scanf("%d",&c);
	printf("last 2 digits of year:\n");
	scanf("%d",&d);
	if(m>2)
	{
		m=m-2;
	}
	else
	{
		m=m+10;
	}
	X=((13*m)-1)/5;
	x=truncf(X);
	Y=d/4;
	y=truncf(Y);
	Z=c/4;
	z=truncf(Z);
	f=k+x+d+y+z-2*c;
	if(f<0)
	{
		f=-f;
	}
	r=f%7;
	switch(r)
	{
		case 0:
			printf("sunday");
			break;
			case 1:
			printf("monday");
			break;
			case 2:
			printf("tuesday");
			break;
			case 3:
			printf("wednesday");
			break;
			case 4:
			printf("thursday");
			break;
			case 5:
			printf("friday");
			break;
			case 6:
			printf("saturday");
			break;
	}
}
