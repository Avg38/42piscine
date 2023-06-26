//42
//03_ft_print_numbers
// Écrire une fonction qui affiche tous les chiffres sur une seule ligne, dans l’ordre croissant.
#include <unistd.h>

void ft_print_numbers(){
    char c;
    c = '0';
    while(c<='9'){
        write(1, &c, 1);
        c++;
    }
}         

int main(){
    ft_print_comb2();
    return 0;
}