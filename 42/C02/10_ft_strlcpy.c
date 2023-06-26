// 42
// 09_ft_strcapitalize
// Reproduire à l’identique le fonctionnement de la fonction strlcpy (man strlcpy).
#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size){
    int i;
    i = 0;
    int len;
    len = 0;
    while (src[len]!='\0'){
        len++;
    }
    while (i<size){
        dest[i] = src[i];
        i++;
    }
    i--;
    dest[i] = '\0';
    return len;
}

int main(){
    char dest[6];
    char src[7] = "Ozanam";
    unsigned int size = 6;
    int i = 0;
    unsigned int res = ft_strlcpy(dest,src,size);
    printf("%d\n",res);
    while (dest[i]!='\0'){
        printf("%c",dest[i]);
        i++;
    }  
    return 0;
}