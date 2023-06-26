// 42
// 07_ft_strupcase
// Écrire une fonction qui met en majuscule chaque lettre.
// Elle devra renvoyer str.
#include <stdio.h>

char *ft_strupcase(char *str){
    int i;
    i = 0;
    while (str[i]!='\0'){
        if(((str[i]>='a') && (str[i]<='z')))
            str[i] = str[i]-32;
        i++;
    }
    return str;
}

int main(){
    char str[100] = "je suis heureuse";
    int i = 0;
    ft_strupcase(str);
    while (str[i]!='\0'){
        printf("%c",str[i]);
        i++;
    }   
    return 0;
}