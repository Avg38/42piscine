//42
//01_ft_strncpy
// Reproduire à l’identique le fonctionnement de la fonction strncpy (man strncpy).
#include <stdio.h>
#include <string.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n){
    int i;
    i = 0;
    n--;
    while(i<=n){
        dest[i] = src[i];
        i++;
    }
    return dest;
}

int main(){
    char dest[10];
    char src[100] = "J'aime la vie.";
    unsigned int n;
    n = 10;
    int i = 0;
    ft_strncpy(dest,src,n);
    while(dest[i]!='\0'){
        printf("%c",dest[i]);
        i++;
    }
    i = 0;
    
    return 0;
}