//42
//00_ft_ft
// Écrire une fonction qui prend un pointeur sur int en paramètre et donne à l’int la valeur de 42.
#include <stdio.h>

void    ft_ft(int *nbr){
    *nbr = 42;
}

int main(){
    int nbr;
    ft_ft(&nbr);
    printf("%d",nbr);
    return 0;
}