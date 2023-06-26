//42
//04_ft_is_negative
// Écrire une fonction qui affiche ’N’ ou ’P’ suivant le signe de l’entier passé en paramètre. Si n est négatif alors afficher ’N’. Si n est positif ou nul alors afficher ’P’.
#include <unistd.h>

void ft_is_negative(int n){
    int negatif = 'N';
    int positif = 'P';
    if(n>=0){
        write(1, &positif, 1);
    } else{
        write(1, &negatif, 1);
    }
}

int main(){
    ft_print_comb2();
    return 0;
}