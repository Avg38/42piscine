//42
//08_ft_sort_int_tab
// Écrire une fonction qui trie un tableau d’entiers par ordre croissant.
// Les paramètres sont un pointeur sur entier et le nombre d’entiers dans le tableau.
#include <stdio.h>

void    ft_swap(int *a,int *b){
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

void    ft_sort_int_tab(int *tab, int size){
    int i;
    i = 0;
    size--;
    while(i<size){
        if(tab[i]>tab[i+1]){
            ft_swap(&tab[i],&tab[i+1]);
            i=-1;
        }    
        i++;
    }
}

int main(){
    int i = 0;
    int tab[100];
    tab[0] = 4 ;
    tab[1] = 6 ;
    tab[2] = 3 ;
    tab[3] = 9 ;
    tab[4] = 5 ;
    tab[5] = 2 ;
    tab[6] = 8 ;
    tab[7] = 1 ;
    tab[8] = 7 ;
    tab[9] = 0 ;
    int size = 10;
    ft_sort_int_tab(tab,size);
    while(i<size){
        printf("%d",tab[i]);
        i++;
    }
    return 0;
}
