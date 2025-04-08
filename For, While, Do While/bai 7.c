#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//freopen("D:\\cykablry\\input.txt", "r", stdin);

int main()
{
    double a;
    double sum = 0.0;
    printf("Nhap so a: ");
    scanf("%lf", &a);
    for(int i = 1; i <= a; i++)
    {
        sum += 1.0/i;
    }
    printf("Tong cac 1/a la: %f", sum);
    return 0;
}
