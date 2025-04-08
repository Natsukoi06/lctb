#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//freopen("D:\\cykablry\\input.txt", "r", stdin);

int main()
{
    int x, sum = 0;
    for(int i = 1; i <= 10; i++)
    {
        scanf("%d", &x);
        sum += x;
    }
    printf("%d", sum);

    return 0;
}
