#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//freopen("D:\\cykablry\\input.txt", "r", stdin);

int main()
{
    int i, n;
    long long giai_thua = 1;
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        giai_thua *=i;
    }
    printf("%lld", giai_thua);

    return 0;
}
