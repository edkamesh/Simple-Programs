#include<stdio.h>
#include<math.h>

int smallest_divisor(int n) {

int i;
for (i = 2; i <= sqrt(n); ++i) {
if (n % i == 0) {
return i;
}
}
return n;

}

int main() {

int n;
printf("Enter a Number: ");
scanf("%d", &n);

printf("Smallest Divisor of %d = %d", n, smallest_divisor(n));

}