#include<stdio.h>
#include<math.h>

int main()
{
	float a = 0.0, b = 0.0, c = 0.0;
	float d = 0.0;
	float x1 = 0.0, x2 = 0.0;
	
	printf("Input a: ");
	scanf("%f", &a);
	printf("Input b: ");
	scanf("%f", &b);
	printf("Input c: ");
	scanf("%f", &c);
	
	d = (b*b) - (4*a*c);
	if(d >= 0)
	{
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
	
		printf("First answer: %f\nSecond anwer: %f", x1, x2);
	}
	else printf("discriminant < 0");
	
	return 0;
}
