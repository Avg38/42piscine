//42
//05_ft_putstr
// Écrire une fonction qui affiche une chaine de caractères à l’écran.
#include <unistd.h>

void    ft_putchar(int c){
    write(1,&c,1);
}

void    ft_putstr(char *str){
    int i;
    i = 0;
    while(str[i]!='\0'){
        ft_putchar(str[i]);
        i++;
    }
}

int main(){
    char str[100] = "Ozan, je t'aime";
    ft_putstr(str);
    return 0;
}