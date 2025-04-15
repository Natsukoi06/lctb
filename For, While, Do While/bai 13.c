#include <stdio.h>
#include <math.h>

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
    int n; 
    double eps;
    printf("Nhap n: "); scanf("%d", &n);
    printf("Nhap eps: "); scanf("%lf", &eps);
    
    double s = 1, tmp;
    int res = 1;
    do
    {
        tmp = poww(n, res) / gt(res);
        s += tmp;
        res++;
    } while (fabs(tmp) > eps);
    
    printf("e ^ %d = %lf", n, s);

    return 0;
}
