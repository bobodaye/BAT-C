#include<stdio.h>
#include<float.h>
#include<math.h>

int main() {
	printf("sin(-M_PI) = %.16f\n", sin(-M_PI));
	printf("sin(M_PI)  = %.16f\n", sin(M_PI));
	printf("-------------------------------\n");
	printf("sin(-M_PI_2) = %.16f\n", sin(-M_PI_2));
	printf("sin(M_PI_2)  = %.16f\n", sin(M_PI_2));
	printf("-------------------------------\n");
	printf("sin(-M_PI_4) = %.16f\n", sin(-M_PI_4));
	printf("sin(M_PI_4)  = %.16f\n", sin(M_PI_4));
	printf("-------------------------------\n");
	printf("sin(-M_PI / 6.0) = %.16f\n", sin(-M_PI / 6.0));
	printf("sin(M_PI / 6.0)  = %.16f\n", sin(M_PI / 6.0));
	printf("-------------------------------\n");
	printf("sin(100.0) = %.16f\n", sin(100.0));
	printf("sin(-100.0) = %.16f\n", sin(-100.0));
	printf("-------------------------------\n");
	printf("sin(DBL_MAX) = %.16f\n", sin(DBL_MAX));
	printf("sin(-DBL_MAX) = %.16f\n", sin(-DBL_MAX));
	printf("-------------------------------\n");
	printf("sin(DBL_MIN) = %.16f\n", sin(DBL_MIN));
	printf("sin(-DBL_MIN) = %.16f\n", sin(-DBL_MIN));
	return 0;
}
