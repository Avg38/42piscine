//42
//02_ft_str_is_alpha
// Écrire une fonction qui renvoie 1 si la chaîne passée en paramètre ne contient que des caractères alphabétiques et renvoie 0 si la chaîne passée en paramètre contient d’autres types de caractères.
// Elle devra renvoyer 1 si str est une chaîne vide.
#include <stdio.h>

int ft_str_is_alpha(char *str){
    int i;
    i = 0;
    while(str[i]!='\0'){
        if(!((str[i]>=65) && (str[i]<=90)) && ((str[i]>=97) && (str[i]<=122)))
            return 0;
        i++;
    }
    return 1;
}

int main(){
    char str[100] = "Boubew";
    int temp = ft_str_is_alpha(str);
    printf("%d",temp);
    return 0;
}
