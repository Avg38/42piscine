//42
//00_ft_putchar
// Écrire une fonction qui affiche le caractère passé en paramètre
#include <unistd.h>

void ft_putchar(char c){
    write(1, &c, 1);
};

int main(){
    ft_putchar('L');
    return 0;
}