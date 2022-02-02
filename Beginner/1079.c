#include <stdio.h>

int main(){
    int n = 0;
    int i=1;
    float a,b,c, med;
    

    scanf("%d", &n);

    while(i <= n){
        scanf("%f%f%f", &a,&b,&c);
        med = ((a*2)+(b*3)+(c*5))/10;
        printf("%1.1f\n", med);
        i = i + 1;
    }

    return 0;
}
