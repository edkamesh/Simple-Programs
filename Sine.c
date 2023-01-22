#include<stdio.h>
#include<math.h>
#define Pi 3.14
int main()
{
    float a,x,Answer;
    printf("The the value of number to calulate sin value:");
    scanf("%f",&x);
    a=Pi/180;
    Answer=sin(x*a);
    printf("The sin value of %lf is %lf",Answer);
}