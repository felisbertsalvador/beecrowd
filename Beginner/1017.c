#include <stdio.h>

int main(){
    float hour, kmh;
    float dist;

    scanf("%f%f", &hour, &kmh);

    dist = kmh * hour / 12;

    printf("%2.3f\n", dist);

    return 0;
}
