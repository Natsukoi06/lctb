#include <stdio.h>
#include <stdlib.h>
#define LEN_A 1000

void nhapMang(double a[])
{
    for(int i = 0; i < 10; i++)
    {
        scanf("%lf", &a[i]);
    }
}

void Min(double a[], int n)
{
    double Min = a[0];
    for(int i = 0; i < n; i++)
    {
        if(Min > a[i])
        {
            Min = a[i];
        }
    }
    printf("Min cua mang la: %.5f\n", Min);
}

void Max(double a[], int n)
{
    double Max = a[0];
    for(int i = 0; i < n; i++)
    {
        if(Max < a[i])
        {
            Max = a[i];
        }
    }
    printf("Max cua mang la: %.5f\n", Max);
}


int main()
{
    int n;
    scanf("%d", &n);
    double *a = (double*)malloc(sizeof(double)*n);
    nhapMang(a);
    Min(a, n);
    Max(a, n);
    free(a);
    return 0;
}
