#include <stdio.h>
#include<math.h>
int main()
{
    int a, b, c, large, small;
    printf("Enter three numbers:");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b && a > c)
    {
        large = a;
        printf("large is %d \n", large);
    }
    if (c > b && c > b)
    {
        large = c;
        printf("large is %d \n", large);
    }
    else
    {
        large = b;
        printf("large is %d \n", large);
    }
    if (a < b && a < c)
    {
        small = a;
        printf("small is %d \n", small);
    }
    if (c < b && c < a)
    {
        small = c;
        printf("small is %d \n", small);
    }
    if (b < a && b < c)
    {
        small = b;
        printf("small is %d \n", small);
    }

}