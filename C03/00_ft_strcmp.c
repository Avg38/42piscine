// 42
// 00_ft_strcmp
// Reproduire à l’identique le fonctionnement de la fonction strcmp (man strcmp).
#include <stdio.h>

int ft_strcmp(char *s1, char *s2){
    int i;
    int c1; 
    int c2; 
    c1 = 0;
    c2 = 0; 
    i = 0;
    while (s1[i]!='\0'){
        c1 = s1[i] + c1;
        c2 = s2[i] + c2;
        i++;
    }
    return c1-c2;
}

int main(){
    char s1[100] = "ToTo";
    char s2[100] = "toto";
    int resultat = ft_strcmp(s1,s2);
    printf("%d",resultat);
    return 0;
}