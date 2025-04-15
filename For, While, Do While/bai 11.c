#include <stdio.h>
#include <string.h>

const char* cs(int n, int _cs, char *tmp)
{
    int res = 0;
    while (n != 0)
    {
        tmp[res++] = n % _cs < 10 ? (n % _cs) + '0' : (n % _cs) - 10 + 'A';
        n /= _cs;
    }
    tmp[res] = '\0';

    strrev(tmp);
    return tmp;
}

int main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    char bin[32], oct[32], hex[32];
    printf("Co so 2: %s\n", cs(n, 2, bin));
    printf("Co so 8: %s\n", cs(n, 8, oct));
    printf("Co so 16: %s\n", cs(n, 16, hex));

    return 0;
}
