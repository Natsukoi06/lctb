#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, d, e, f, x;
    printf("Nhap a, b, e: ");
    scanf("%lf %lf %lf", &a, &b, &e);
    printf("\nNhap c, d, f: ");
    scanf("%lf %lf %lf", &c, &d, &f);
    x = ((b*f-d*e)/(b*c-a*d));
    printf("\n");

    if((a/c == b/d) && (b/d != e/f))
    {
      printf("He phuong trinh vo nghiem");
    }
    else if((a*d == c*b) && (b*f == e*d) && (a*f == c*e))
    {
        printf("He phuong trinh co vo so nghiem");
    }
    else
    {
        printf("He phuong trinh co nghiem duy nhat\n");
        printf("x = %.5f\n", x);
        printf("y = %.5f", (e-a*x)/b);
    }
    return 0;
}
