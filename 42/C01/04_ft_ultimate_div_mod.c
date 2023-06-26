//42
//04_ultimate_div_mod
//Cette fonction divise les int pointés par a et b.
// Le résultat de la division est stocké dans l’int pointé par a.
// Le résultat du reste de la division est stocké dans l’int pointé par b

#include <stdio.h>

void    ft_ultimate_div_mod(int *a,int *b){
    int c;
    c = *a / *b;
    *b = *a % *b;
    *a = c;
}

int main(){
    int a;
    a = 27;
    int b;
    b = 5;
    ft_ultimate_div_mod(&a,&b);
    printf("a/b = %d et le reste = %d",a,b);
    return 0;
}