// 42
// 03_ft_is_numeric
// Écrire une fonction qui renvoie 1 si la chaîne passée en paramètre ne contient que des chiffres et renvoie 0 si la chaîne passée en paramètre contient d’autres types de caractères.
// Elle devra renvoyer 1 si str est une chaîne vide.
#include <stdio.h>

int ft_str_is_numeric(char *str){
    int i;
    i = 0;
    while(str[i]!='\0'){
        if(!((str[i]>='0') && (str[i]<='9'))){
            return 0;
        }
        i++;
    }
    return 1;
}


int main(){
    char str[100] = "134";
    char temp = ft_str_is_numeric(str);
    printf("%d",temp);
}
