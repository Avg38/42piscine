// 42
// 02_ft_strcat
// Reproduire à l’identique le fonctionnement de la fonction strcat (man strcat).
#include <stdio.h>

char *ft_strcat(char *dest, char *src){
    int i;
    i = 1;
    int j;
    j = 0;
    while (dest[i-1]!='\0'){
        if(dest[i]=='\0'){
            dest[i] = src[j];
            j++;
        }
    i++;
    }
    return dest;
}

int main(){
    char dest[100] = "Je suis";
    char src[100] = " trop intelligente !";
    int i = 0;
    ft_strcat(dest,src);
    while(dest[i]!='\0'){
        printf("%c",dest[i]);
        i++;
    }
    return 0;
}