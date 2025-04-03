#include <stdio.h>

int main()
{
    int a, b;
    printf("Nhap 2 so: ");
    scanf("%d%d", &a, &b);
    printf("Phep cong: %d\n", a+b);
    printf("Phep tru: %d\n", a-b);
    printf("Phep nhan: %d\n", a*b);
    printf("Phep chia: %d\n", a/b);
    return 0;
}
