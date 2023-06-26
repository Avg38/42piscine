//42
//06_ft_strlen
// Écrire une fonction qui compte le nombre de caractères dans une chaîne de caractères et qui retourne le nombre trouvé.

#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str){
    int i;
    i = 0;
    while(str[i]!='\0'){
        i++;
    }
    return i;
}

int main(){
    char str[100] = "Ozan";
    int i = ft_strlen(str);
    printf("\n%d",i);
    return 0; 
}