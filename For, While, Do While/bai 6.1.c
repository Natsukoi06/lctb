#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//freopen("D:\\cykablry\\input.txt", "r", stdin);

int main()
{
    int a, b;
    int r;
    printf("Nhap 2 so a, b: ");
    scanf("%d%d", &a, &b);
    int x = a, y = b;

     while(y!=0)
    {
        r = x % y;
        x = y;
        y = r;
    }

    int UCLN = x;
    printf("UCLN: %d\n", UCLN);

    int BCNN = (a/x)*b;
    printf("BCNN: %d\n", BCNN);

    return 0;
}
