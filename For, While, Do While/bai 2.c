#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//freopen("D:\\cykablry\\input.txt", "r", stdin);

int main()
{
    //freopen("D:\\cykablry\\input.txt", "r", stdin);
    int x, i, number;
    printf("Nhap mot so de kiem tra co phai la so nguyen to hay khong: ");
    scanf("%d", &x);
    number=0;

    for(i=2; i<x; i++)
    {
        if(x % i == 0)
        {
            number ++;
        }
    }
    if(x==1)
    {
        printf("NO\n");
    }
    else if(x==2)
    {
        printf("YES\n");
    }
    else if(number > 0)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }

    return 0;
}
