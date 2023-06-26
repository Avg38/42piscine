//42
//06_ft_print_comb2
//  Écrire une fonction qui affiche toutes les différentes combinaisons de deux nombres entre 0 et 99, dans l’ordre croissant.
// Cela donne quelque chose comme ça : $>./a.out | cat -e 00 01, 00 02, 00 03, 00 04, 00 05, ..., 00 99, 01 02, ..., 97 99, 98 99$>

#include <unistd.h>

void ft_putchar(char c){
    write(1,&c,1);
}

void ft_afficher(int a,int b){
    ft_putchar(a/10 + '0');
    ft_putchar(a%10 + '0');
    write(1," ",1);
    ft_putchar(b/10 + '0');
    ft_putchar(b%10 + '0');
    write(1,",",1);
    write(1," ",1);
    
}

void ft_print_comb2(){
    int a;
    int b;
    a=0;
    b=1;

    while (a<=98 && b<=99){
        ft_afficher(a,b);
        b++;
        if(b==99){
            ft_afficher(a,b);
            a++;
            b=a+1;
        }
    }
   
}



int main(){
    ft_print_comb2();
    return 0;
}