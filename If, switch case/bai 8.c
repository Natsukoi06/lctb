#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c;
    printf("Nhap chieu dai 3 canh: ");
    scanf("%lf%lf%lf", &a, &b, &c);

    if(a+b > c && a+c > b && b+c>a)
    {
        if( a == b || a == c || b == c)
        {
            if(a == c &&a == b )
            {
                printf("(%.5f, %.5f, %.5f) la tam giac deu", a, b, c);
            }
            else

            {
                printf("(%.5f, %.5f, %.5f) la tam giac can", a, b, c);
            }
        }
        else if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
        {
            if(a == b || a == c || c == b)
            {
                printf("(%.5f, %.5f, %.5f) la tam giac vuong can", a, b, c);
            }
            else
            {
                printf("(%.5f, %.5f, %.5f) la tam giac vuong", a, b, c);
            }
        }
        else
        {
            printf("(%.5f, %.5f, %.5f) la tam giac thuong", a, b, c);
        }
    }
    else
    {
        printf("(%.5f, %.5f, %.5f) khong phai la tam giac", a, b, c);
        return 0;
    }
    printf("\n");

    double CV = a+b+c;
    double nuaCV = CV/2.0;
    printf("Chu vi tam giac la: %f\n", CV);
    printf("Dien tich tam giac la: %f", sqrt(nuaCV*(nuaCV - a)*(nuaCV - b)*(nuaCV - c)));

    return 0;
}
