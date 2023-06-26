//42
//01_ft_print_alphabet
// Écrire une fonction qui affiche l’alphabet en minuscule sur une seule ligne, dans l’ordre croissant, à partir de la lettre ’a’
#include<unistd.h>

void ft_print_alphabet(){
    int c;
    c=97;
    while(c<=122){
        write(1, &c, 1);
        c++;
    }
    
};

int main(){
    ft_print_comb2();
    return 0;
}