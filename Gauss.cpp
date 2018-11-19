#include<stdio.h>

int main()
{
    int input;
    float a1, b1, c1, a2, b2, c2, a=0, b=0;
    scanf("%d", &input);
    for(int i=0; i<input; i++)
    {
        scanf("%f %f %f", &a1, &b1, &c1);
        scanf("%f %f %f", &a2, &b2, &c2);
        printf("Case #%d: \n", i+1);
        a=((c1*b2)-(c2*b1)) / ((a1*b2)-(a2*b1));
        b=((c1*a2)-(c2*a1)) / ((a2*b1)-(a1*b2));
        printf("x = %.4f\n", a);
        printf("y = %.4f\n", b);
    }
    return 0;
}
