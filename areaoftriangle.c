#include <stdio.h>
#include <math.h>

int main() {
double a, b, c, s, area;

printf("Enter the dimensions of triangle a, b, and c:\n");
scanf("%lf %lf %lf", &a, &b, &c);

s = (a + b + c) / 2;
area = sqrt(s * (s - a) * (s - b) * (s - c));

printf("\nArea of your triangle with sides %.2lf, %.2lf, and %.2lf = %.2lf\n", a, b, c, area);

return 0;
}