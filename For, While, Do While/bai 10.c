#include <stdio.h>

int fibo(int x)
{
    if(x == 0 || x == 1) return x;
    else return fibo(x-1)+fibo(x-2);
}

int main()
{
    int x;
    printf("Nhap x: ");
    scanf("%d", &x);
    printf("Phan tu thu %d trong day fibo la: %d", x, fibo(x));
    return 0;
}
