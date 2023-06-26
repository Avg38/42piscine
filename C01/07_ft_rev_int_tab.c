//42
//07_ft_rev_int_tab
// Écrire une fonction qui inverse l’ordre des élements d’un tableau d’entiers.
// Les paramètres sont un pointeur sur entier et le nombre d’entiers dans le tableau.

#include <stdio.h>

void    ft_rev_int_tab(int *tab, int size){
    int tabtwo[100]; //Création d'un deuxième tableau mais j'aurai pu mettre une variable temporaire qui stocke les valeur du tableau au fur et à mesure
    int i;
    i = 0;
    while(i!=size){
        tabtwo[i]=tab[i];
        i++;
    }
    i = 0 ;
    int j = 4;
    while(i!=j){
        tab[i] = tabtwo[size-1];
        printf("%d",tab[i]);
        i++;
        size--;
    }
}

int main(){
    int tab[100];
    tab[0] = 0;
    tab[1] = 1;
    tab[2] = 2;
    tab[3] = 3;
    int size = 4;
    ft_rev_int_tab(tab,size);

    return 0;
}