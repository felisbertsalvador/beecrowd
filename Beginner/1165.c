#include <stdio.h>

void prime(int x){
    int numDiv = 0;
    int count;

    for(count = 1; count <= x; count++){
        if(x % count == 0){
            numDiv = numDiv + 1;
    }
  }
    if(numDiv == 2){
        printf("%d eh primo\n", x);
    }
    else{
        printf("%d nao eh primo\n", x);
    }

}

int main(){
    int i=1, testNum;
    int number;

    scanf("%d", &testNum);
    while (i <= testNum){
        scanf("%d", &number);
        prime(number);
        i = i + 1;
    }
    return 0;
}
