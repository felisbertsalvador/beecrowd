#include <stdio.h>

int main(){

    float avg;
    float n1, n2, n3, n4, exam;
    scanf("%f%f%f%f", &n1, &n2, &n3, &n4);

    avg = ((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;

    printf("Media: %2.1f\n", avg);
    if(avg >= 7){
        printf("Aluno aprovado.\n");
    }
    else if(avg >= 5 && avg <= 6.9){
        printf("Aluno em exame.\n");
        scanf("%f", &exam);
        printf("Nota do exame: %2.1f\n", exam);
        avg = ((avg + exam)/ 2);
        if(avg >= 5){
            printf("Aluno aprovado.\n");
        }
        else{
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %2.1f\n", avg);

    }
    else{
        printf("Aluno reprovado.\n");
    }
    return 0;
}
