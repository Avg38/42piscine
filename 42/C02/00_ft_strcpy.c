//42
//00_ft_strcpy
// Reproduire à l’identique le fonctionnement de la fonction strcpy (man strcpy).
#include <stdio.h>

char    *ft_strcpy(char *dest, char *src){
    int i;
    i = 0;
    while(src[i]!= '\0' ){
        dest[i] = src[i];
        i++;
    }
    dest[i] = src[i];
    return dest;
}

int main(){
    char src[100] = "Je suis un chou-fleur";
    char dest[100];
    int i = 0;
    ft_strcpy(dest,src);
    while(dest[i]!='\0'){
        printf("%c",dest[i]);
        i++;
    }
    return 0;
}
