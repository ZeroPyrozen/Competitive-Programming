#include <stdio.h>

int main()

{
    int testcase;
    int a, b, c, x, y, z;
    int bibi, jojo;
    
    scanf("%d", &testcase);
    
    for(int i=1; i <= testcase; i++)
    {
        scanf("%d %d %d %d %d %d", &a, &b, &c, &x, &y, &z);
        
        bibi=((c*a)+(x*b)-(a+b))/(c-x);
        jojo=c*bibi-(c*a)+a;
        
        if(jojo == (y*bibi)+(y*z)-z)
        {
            printf("Case #%d: YES\n", i);
        }
        else
            printf("Case #%d: NO\n", i);
            
    }
    
    return 0;
}
