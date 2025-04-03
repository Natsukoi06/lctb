#include <stdio.h>
#include <math.h>
int main()
{
    double R;
    double pi = 2*acos(0.0);
    printf("Nhap ban kinh hinh cau: ");
    scanf("%lf", &R);
    printf("Dien tich hinh cau la: %f\n", 4*pi*R*R);
    printf("The tich hinh cau la: %f\n", 4*pi*R*R*R/3);
    return 0;
}
