#include <stdio.h>
#include <math.h>

#define PI 3.141592653589793238462643383279

double gt(double n) {
    double s = 1;
    for(int i = 1; i <= n; i++) 
        s *= i;
    
    return s;
}

double poww(double n, int m) {
    double s = 1;
    for(int i = 1; i <= m; i++) 
        s *= n;
    
    return s;
}

int main() {
    double n, eps;
    printf("Nhap n: "); scanf("%lf", &n);
    printf("Nhap eps: "); scanf("%lf", &eps);

    n = n * PI / 180.0;

    double s = 0, tmp;
    int res = 1;
    do
    {
        tmp = poww(n, res) / gt(res);
        if((res - 2) % 2 == 0 || res == 1)
            s += tmp;
        else
            s -= tmp;

        res += 2;
    } while (fabs(tmp) > eps);
    
    printf("Sin(%lf) la: %lf", n, s);

    return 0;
}
