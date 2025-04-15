#include <stdio.h>

int main() {
    int n;
    printf("Nhap n: "); scanf("%d", &n);

    long long s = 0;
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) 
           s += i;
    }
    
    if((long long)n * 2 == s) 
        printf("%d la so hoan hao\n", n);
    else
        printf("%d khong phai so hoan hao\n", n);
        
    return 0;
}
