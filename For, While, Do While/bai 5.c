#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//freopen("D:\\cykablry\\input.txt", "r", stdin);

int main()
{
    int a;
  printf("Nhap 1 so n: ");
    scanf("%d", &a);
  printf("Cac uoc so cua n la: ");
    for(int i = 1; i <= a; i++)
    {
        if(a % i == 0)
        {
            printf("%3d", i);
        }
    }
    return 0;
}
