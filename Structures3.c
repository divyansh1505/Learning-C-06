#include <stdio.h>

struct vectors {
int x;
int y;
};

void CalcSum (struct vectors v1, struct vectors v2, struct vectors sum );

int main () {
struct vectors v1 = {3,4};
struct vectors v2 = {5,6};
struct vectors sum = {0};

CalcSum(v1, v2, sum);
return 0;
}

void CalcSum (struct vectors v1, struct vectors v2, struct vectors sum){
sum.x = v1.x + v2.x;
sum.y = v1.y + v2.y;

printf("Sum of x is %d  \n", sum.x);
printf("Sum of y is %d  \n", sum.y);
}