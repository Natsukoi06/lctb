#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//freopen("D:\\cykablry\\input.txt", "r", stdin);

int main()
{
    int i, n;
    double sum = 0, giai_thua = 1;
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        giai_thua *=i;
        sum += 1/giai_thua;
    }
    printf("%.10f", sum);

    return 0;
}
