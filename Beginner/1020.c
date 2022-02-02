#include <stdio.h>

int main(){
    int days;

    scanf("%d", &days);
    printf("%d ano(s)\n", days/360);
    printf("%d mes(s)\n", days/12);
    printf("%d dia(s)\n", days);
    return 0;
}
