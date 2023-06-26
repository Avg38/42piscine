//42
//01_ft_ultimate_ft
// Écrire une fonction qui prend un pointeur sur pointeur sur pointeur sur pointeur sur pointeur sur pointeur sur pointeur sur pointeur sur pointeur sur int en paramètre et donne à l’int la valeur de 42.

#include <stdio.h>

void    ft_ultimate_ft(int  *********nbr){
    *********nbr=42;
}

int main(){
    int nbr;
    int *a = &nbr;
    int **b = &a;
    int ***c = &b;
    int ****d = &c;
    int *****e = &d;
    int ******f = &e;
    int *******g = &f;
    int ********h = &g;
    ft_ultimate_ft(&h);
    printf("%d",nbr);
    return 0;
}