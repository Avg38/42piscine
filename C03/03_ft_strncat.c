// 42
// 03_ft_strncat
// Reproduire à l’identique le fonctionnement de la fonction strcat (man strnncat).
#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb){
    int i;
    int j;
    i = 1;
    j = 0;
    while (dest[i-1]!='\0'){
        if ((dest[i] =='\0') && (j < nb)){
            dest[i] = src[j];
            j++;
        }
        i++;
    }
    dest[i] = '\0';
    return dest;
}

int main(){
    char dest[100] = "Je suis";
    char src[100] = " trop intelligente !";
    int nb = 5;
    int i = 0;
    ft_strncat(dest,src,nb);
    while(dest[i]!='\0'){
        printf("%c",dest[i]);
        i++;
    }
    return 0;
}