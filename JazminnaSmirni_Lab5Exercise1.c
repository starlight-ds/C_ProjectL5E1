/*
 * JazminnaSmirni_Lab5Exercise1.c
 *
 *  Created on: Feb 29, 2024
 *      Author: jsmirni
 */

#include <stdio.h>
double sum_average(double x,double y,double z);

int
main(void)
{
	setvbuf(stdout, NULL,_IONBF, 0);
	double x,y,z;

	printf("Enter x value: ");
	scanf("%lf", &x);

	printf("Enter y value: ");
	scanf("%lf", &y);

	printf("Enter z value: ");
	scanf("%lf", &z);

	double result = sum_average(x,y,z);
	printf("Sum average = %.2f", result);

	return 0;
}

double sum_average(double x,double y,double z)
{
	return((x+y+z)/3);
}
