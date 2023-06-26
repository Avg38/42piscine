//42
//05_ft_print_comb
// Écrire une fonction qui affiche, dans l’ordre croissant, toutes les différentes combinaisons de trois chiffres différents dans l’ordre croissant - oui, la répétition est volontaire.
// Cela donne quelque chose comme ça : $>./a.out | cat -e 012, 013, 014, 015, 016, 017, 018, 019, 023, ..., 789$> 
// • 987 n’est pas là car 789 est déjà présent
// • 999 n’est pas là car ce nombre ne comporte pas exclusivement des chiffres différents les uns des autres
#include <unistd.h>

void ft_print_comb(){
    char a;
    char b;
    char c;
    char d;
    a=48;
    b=49;
    c=50;
    while(a<56){
        write(1,&a,1);
        write(1,&b,1);
        write(1,&c,1);
        c++;
        if(c>57){
            b++;
            c=b+1;
        }
        if(b>56){
            a++;
            b=a+1;
            c=b+1;
        }
        write(1," ",1);
    }
}

int main(){
    ft_print_comb2();
    return 0;
}