//42
//02_ft_swap
// Écrire une fonction qui échange le contenu de deux entiers dont les adresses sont données en paramètres.
#include <stdio.h>

void    ft_swap(int *a, int *b){
    int c; 
    c = *a;
    *a = *b;
    *b = c;
}

int main(){
    int a;
    int b;
    a = 3;
    b = 5;
    ft_swap(&a,&b);
    printf("a=%d,b=%d",a,b);
    return 0;
}