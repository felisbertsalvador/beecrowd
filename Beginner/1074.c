#include <stdio.h>

int main(){
    int t, n;

    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        scanf("%d", &t);
        if(t%2==0 && t<0){
            printf("EVEN NEGATIVE\n");
        }
        if(t%2==0 && t>0){
            printf("EVEN POSITIVE\n");
        }
        else if(t%2==1 && t>0){
            printf("ODD POSITIVE\n");
        }
        else if(t%2==-1 && t<0){
            printf("ODD NEGATIVE\n");
        }
        else if(t==0){
            printf("NULL\n");
        }
    }
    return 0;
}
