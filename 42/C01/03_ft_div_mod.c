//42
//03_ft_div_mod
// Cette fonction divise les deux paramètres a et b et stocke le resultat dans l’int pointé par div.
// Elle stocke également le reste de la division de a et b dans l’int pointé par mod
#include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod){
    *div = a/b;
    *mod = a%b;
}

int main(){
    int a;
    a = 27;
    int b;
    b = 5;
    int div;
    int mod;
    ft_div_mod(a,b,&div,&mod);
    printf("a/b=%d,reste de a/b=%d",div,mod);
    return 0;
}