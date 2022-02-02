// Area of a Circle (1002)

/*   
   Formula: A = n * R^2
   In this problem n is the constanti, not R.
*/

#include <stdio.h>
int main(){

    double Area, R;
    double n = 3.14159;

    scanf("%lf", &R);
    Area = (n * (R*R));
    printf("A=%2.4f\n", Area);

    return 0;
}
