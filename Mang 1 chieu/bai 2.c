#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[11];
    printf("Nhap mang 1 chieu: ");
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Mang 1 chieu in nguoc la: ");
    for(int i = 9; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
