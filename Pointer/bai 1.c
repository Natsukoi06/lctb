#include <stdio.h>
#define LEN_A 1000

void doiCho(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;
    printf("Nhap so a: ");
    scanf("%d", &a);
    printf("Nhap so b: ");
    scanf("%d", &b);
    printf("a va b truoc khi doi cho la: ");
    printf("%d   %d\n", a, b);
    doiCho(&a, &b);
    printf("a va b sau khi doi cho la: ");
    printf("%d   %d", a, b);
    return 0;
}
