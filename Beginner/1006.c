#include <stdio.h>

int main(){
    double A, B, C, average;

    scanf("%lf%lf%lf", &A, &B, &C);
    A = A * 2;
    B = B * 3;
    C = C * 5;
    average = (A+B+C)/10;
    printf("MEDIA = %1.1lf\n", average);
    return 0;
}
