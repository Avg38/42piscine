//42
//02_ft_print_reverse_alphabet
// Écrire une fonction qui affiche l’alphabet en minuscule sur une seule ligne, dans l’ordre décroissant, à partir de la lettre ’z’.

#include <unistd.h>

void ft_print_reverse_alphabet(){
    int c;
    c=122;
    while(c>=97){
        write(1, &c, 1);
        c--;
    }
}

int main(){
    ft_print_comb2();
    return 0;
}