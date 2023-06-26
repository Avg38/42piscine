// 42
//  06_ft_str_is_printable
// Écrire une fonction qui renvoie 1 si la chaîne passée en paramètre ne contient que des caractères affichables et renvoie 0 si la chaîne passée en paramètre contient d’autres types de caractères.
// Elle devra renvoyer 1 si str est une chaîne vide
#include <stdio.h>

int ft_str_is_printable(char *str){
        int i;
        i = 0;
        while(str[i]!='\0'){
            if(!(((str[i]>=32) && (str[i]<=126))))
                return 0;
            i++;
        }
        return 1;
}

int main(){
    char str[100] ="zfg";
    // str[4] = 28;
    int temp = ft_str_is_printable(str);
    printf("%d",temp);
}