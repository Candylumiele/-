#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define _USE_MATH_DEFINES
#include<math.h>

double sinc(double x1);
double cosc(double x2);
double tanc(double x3);
double ragc(double rag);
int main()
{
	double ans = 0;
	double rag = 0;
	printf("Šp“x‚ð“ü—Í\n");
	scanf_s("%lf",&rag);
	ragc(rag);

	return 0;
}
double ragc(double rag)
{
	int i= 0;
	double ans = 0;
	double tans = 0;
	ans = (rag * M_PI)/180;
	printf("1sin,2cos,3tan\n");
	scanf_s("%d",&i);
	switch (i)
	{
	case 1:
		sinc(ans);
		break;
	case 2:
		cosc(ans);
		break;
	case 3:
		tanc(ans);
		break;
	}
}
double sinc(double x1)
{
	double y = 0;
	y = sin(x1);
	printf("%lf", y);
	return 0;
}
double cosc(double x2)
{
	double y = 0;
	y = cos(x2);
	printf("%lf", y);
	return 0;
}
double tanc(double x3)
{
	double y = 0;
	y = tan(x3);
	printf("%lf", y);
	return 0;
}