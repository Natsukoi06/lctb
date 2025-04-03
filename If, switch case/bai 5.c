#include <stdio.h>
#include <math.h>
int main()
{

    double a, b, c, x, delta;
    printf("Nhap 3 so a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    delta = b*b - 4*a*c;

    if(delta >= 0)
    {
        if(a == 0)
        {
            if(b==0)
            {
                if (c==0)
                {
                    printf("Moi x la nghiem");
                }

                else
                {
                    printf("Phuong trinh vo nghiem");
                }
            }

            else
            {
                printf("Phuong trinh co 1 nghiem don\n");
                printf("x = %.5f", x = -c/b);
            }
        }
        else if(delta == 0 && a != 0)
        {
            printf("Phuong trinh co nghiem kep\n");
            printf("x1 = x2 = %.5f", x = -b/(2*a));
        }
        else
        {
            printf("Phuong trinh co 2 nghiem phan biet\n");
            printf("x1 = %.5f\n", x = (-b - sqrt(delta))/(2*a));
            printf("x2 = %.5f\n", x = (-b + sqrt(delta))/(2*a));
        }
    }
    else if (delta < 0)
    {
        printf("Phuong trinh vo nghiem");
    }
    return 0;
}


