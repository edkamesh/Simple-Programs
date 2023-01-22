#include<stdio.h>
#include<math.h>
int main()
{
    int base,power,Answer;
    printf("Enter the base and the power: ");
    scanf("%d%d",&base,&power);
    Answer=pow(base,power);
    printf("The exponentation of given number is %d",Answer);
    return 0;
}