#include <stdio.h>

int main(){
    float sal, Nsal, Mearned;

    scanf("%f", &sal);
    if(sal >= 0 && sal <= 400.00){
        Nsal = sal +((sal * 15) / 100);
        Mearned = Nsal - sal;
        printf("Novo salario: %5.2f\n", Nsal);
        printf("Reajuste ganho: %2.2f\n", Mearned);
        printf("Em percentual: 15 %%\n");
    }
    else if(sal>=400.01 && sal <= 800.00){
        Nsal = sal +((sal * 12)/100);
        Mearned = Nsal - sal;
        printf("Novo salario: %5.2f\n", Nsal);
        printf("Reajuste ganho: %2.2f\n", Mearned);
        printf("Em percentual: 12 %%\n");
    }
    else if(sal>=800.01 && sal<= 1200.00){
        Nsal = sal +((sal * 10)/100);
        Mearned = Nsal - sal;
        printf("Novo salario: %5.2f\n", Nsal);
        printf("Reajuste ganho: %2.2f\n", Mearned);
        printf("Em percentual: 10 %%\n");
    }
    else if(sal>=1200.01 && sal<= 2000.00){
        Nsal = sal +((sal * 7)/100);
        Mearned = Nsal - sal;
        printf("Novo salario: %5.2f\n", Nsal);
        printf("Reajuste ganho: %2.2f\n", Mearned);
        printf("Em percentual: 7 %%\n");
    }
    else {
        Nsal = sal+((sal * 4)/100);
        Mearned = Nsal - sal;
        printf("Novo salario: %5.2f\n", Nsal);
        printf("Reajuste ganho: %2.2f\n", Mearned);
        printf("Em percentual: 4 %%\n");
    }
}
