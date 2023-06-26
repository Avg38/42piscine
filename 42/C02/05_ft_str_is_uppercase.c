// 42
//  05_ft_str_is_uppercase
// Écrire une fonction qui renvoie 1 si la chaîne passée en paramètre ne contient que des caractères alphabétiques majuscules et renvoie 0 si la chaîne passée en paramètre contient d’autres types de caractères.
// Elle devra renvoyer 1 si str est une chaîne vide.
#include <stdio.h>

int ft_str_is_uppercase(char *str){
        int i;
        i = 0;
        while(str[i]!='\0'){
            if(!((str[i]>=65) && (str[i]<=90)))
                return 0;
            i++;
        }
        return 1;
}

int main(){
    char str[100] = "DDF";
    int temp = ft_str_is_uppercase(str);
    printf("%d",temp);
}