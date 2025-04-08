#include <stdio.h>
#include <stdlib.h>

void nhapMang(double a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &a[i]);
    }
}

void minMax(double a[], int n, double *minA, double *maxA)
{
    *minA = a[0];
    *maxA = a[0];
    for (int i = 1; i < n; i++)
    {
        if (*maxA < a[i])
        {
            *maxA = a[i];
        }
        if (*minA > a[i])
        {
            *minA = a[i];
        }
    }
}

int main()
{
//    freopen("D:\\cykablry\\input.txt", "r", stdin);
    int n;
    scanf("%d", &n);
    double a[n];
    double minA, maxA;

    nhapMang(a, n);
    minMax(a, n, &minA, &maxA);

    printf("Min = %.3f\n", minA);
    printf("Max = %.3f\n", maxA);


    return 0;
}
