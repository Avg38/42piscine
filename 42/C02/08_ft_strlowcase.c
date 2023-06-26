// 42
// 08_ft_strlowcase
// Écrire une fonction qui met en minuscule chaque lettre.
// Elle devra renvoyer str.
#include <stdio.h>

char *ft_strlowcase(char *str){
    int i;
    i = 0;
    while (str[i]!='\0'){
        if(((str[i]>= 'A') && (str[i]<='Z')))
            str[i] = str[i] + 32;
        i++;
    }
    return str;
}

int main(){
    char str[100] = "JE SUIS TA MERE";
    int i = 0;
    ft_strlowcase(str);
    while (str[i]!='\0'){
        printf("%c",str[i]);
        i++;
    }
    return 0;
}