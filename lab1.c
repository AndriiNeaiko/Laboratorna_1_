#include <stdio.h>
#include <math.h>

int main() {
	float y, x;
  	printf ("Введите значение  x:");
	scanf ("%f", &x);

	y = pow(x, 3) - 4 * pow(x, 2) - 5 * x + 9 + cos(x);
	printf("\nОтвет  y = %.0f\n", y);
}
