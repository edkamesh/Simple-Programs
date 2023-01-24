#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    printf("Enter the no of squares needed:");
    scanf("%d",&n);
    printf("Number\t\tSquare\n");
    for (i = 1; i<=n; i++)
    {
        
        printf("%d\t\t\t%d\n",i,i*i);
    }
    return 0;
    
}