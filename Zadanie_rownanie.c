# include <stdio.h>
# include <math.h>
float a,b,c;
double  delta,x1,x2;
int  main()
{
printf("Wartosc a: ");
scanf("%f",&a);
if(a==0)
{
printf("A nie moze wynosic 0 !!!\n");
}
else
{
printf("Wartosc b: ");
scanf("%f",&b);
printf("Wartosc c: ");
scanf("%f",&c);
delta=0;
delta=(b*b)-(4*a*c);
printf("Delta= %.2f\n",delta);
  if (delta>0)
	{
	delta=sqrt(delta);
	x1=((-b-delta)/2*a);
	x2=((-b+delta)/2*a);
	printf("Dwa rozwiazania: \n");
	printf("X1: %.2f\n",x1);
	printf("X2: %.2f\n",x2);
	}
	else
	{
	if(delta==0)
		{
		x1=-b/2*a;
		printf("Jedno rozwiazanie: \n");
		printf("X1: %.2f\n",x1);
		}
		else
		{
		printf("Nie ma rozwiazan dla podanych wartosci !\n");
		return 0;
		}
	}
    }
return 0;
}
