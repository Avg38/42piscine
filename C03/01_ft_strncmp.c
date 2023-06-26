// 42
// 00_ft_strncmp
// Reproduire à l’identique le fonctionnement de la fonction strncmp (man strncmp).
#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n){
    int i;
    int c1;
    int c2;
    c1 = 0;
    c2 = 0;
    i = 0;
    while (i<n){
        c1 = s1[i] + c1;
        c2 = s2[i] + c2;
        i++;
    }
    return c1-c2;
    
}

int main(){
    char s1[100] = "ToToooo";
    char s2[100] = "toto";
    int n = 2;
    int resultat = ft_strncmp(s1,s2,n);
    printf("%d",resultat);
    return 0;
}
