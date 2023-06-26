//42
//07_ft_putnbr
// Écrire une fonction qui affiche un nombre passé en paramètre. La fonction devra être capable d’afficher la totalité des valeurs possibles dans une variable de type int.

#include <unistd.h>

void ft_putchar(char c){
    write(1,&c, 1);
}

// void ft_putnbr(int nb){
//     int multiple;
//     multiple=10;
//     if(nb<0){
//         write(1,"-",1);
//         nb = -nb;
//     }
//     while(nb/multiple!=0){
//         multiple=multiple*10;
//     }
//     if(nb>=100000000){
//         multiple = 100000000;
//         ft_putchar(nb/multiple/10 + '0');
//     }
//     multiple = multiple/10;
//     while(multiple>=10){
//         ft_putchar(nb/multiple-(nb/(multiple*10)*10)+ '0');
//         multiple=multiple/10;
//     }
//     ft_putchar(nb%10 + '0');
    
// }

void ft_putnbr(int nb){
    if(nb<0){
        write(1,"-",1);
        nb=-nb;
    }
    if(nb>9)
        ft_putnbr(nb/10);
    ft_putchar(nb%10 + '0');
}

int main(){
    ft_putnbr(-2147483647);
    write(1,"\n",1);
    ft_putnbr(2147483647);
    write(1,"\n",1);
    ft_putnbr(42);
    return 0;
}