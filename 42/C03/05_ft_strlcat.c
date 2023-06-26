// 42
// 05_ft_strlcat
// Reproduire à l’identique le fonctionnement de la fonction strlcat (man strlcat).
#include <stdio.h>



unsigned int ft_strlcat(char *dest, char *src, unsigned int size){
    int i;
    i = 0;
    int j;
    j = 0;

    while (i<size){
        if (dest[i]=='\0'){
            dest[i] = src[j]; 
            j++;
        }
        i++;
    }
    dest[i] = '\0';
    return i--;
}

int main(){
    char dest[20] = "J'ai faim ";
    char src[100] = "comme jamais";
    unsigned int size = 19;
    int i = 0; 
    unsigned int resultat = ft_strlcat(dest,src,size);
    printf("%d\n",resultat);
    while (dest[i]!='\0'){
        printf("%c",dest[i]);
        i++;
    }
    
    return 0;
}