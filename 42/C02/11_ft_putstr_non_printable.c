// 42
// 11_ft_putstr_non_printable
// Écrire une fonction qui affiche une chaîne de caractères à l’écran. Si cette chaîne contient des caractères non-imprimables, ils devront être affichés sous forme hexadécimale (en minuscules) en les précédant d’un "backslash".
#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c){
    write(1,&c,1);
}

void    ft_putstr_non_printable(char *str){
    char hexa1[32] = "00000000000000001111111111111111";
    char hexa2[32] = "0123456789abcdef0123456789abcdef";
    int i = 0;
    int j;

    while(!(str[i]=='\0' && str[i+1]=='\0' && str[i+2]=='\0')){
        j = str[i];
        if(j<31){
            write(1,"\\",1);
            ft_putchar(hexa1[j]);
            ft_putchar(hexa2[j]);
        }else{
            ft_putchar(str[i]);
        }
        i++;
    }

    

}

int main(){
    char str[30] = "Coucou\ntu vas bien?";
    int i = 0;
    ft_putstr_non_printable(str);
    

    return 0;
}