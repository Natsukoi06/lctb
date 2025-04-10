#include <stdio.h>
#include <stdlib.h>
#define LEN_A 1000

void nhapMang(int a[])
{
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
}

void inMang(int a[])
{
    for(int i = 0; i < 10; i++)
    {
        printf("%3d", a[i]);
    }
}
int main()
{
    int *a = (int*)malloc(sizeof(int)*10);
    nhapMang(a);
    inMang(a);
    return 0;
}
