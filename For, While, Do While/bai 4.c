#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//freopen("D:\\cykablry\\input.txt", "r", stdin);

int main()
{
    int sum = 0;
    for(int i = 1; i <= 100; i++)
    {
        if(i % 2 != 0)
        {
            sum += i;
        }
    }
    printf("Tong cac so le tu 1->100 la: %d", sum);

    return 0;
}
