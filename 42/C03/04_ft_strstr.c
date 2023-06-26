// 42
// 04_ft_strstr
// Reproduire à l’identique le fonctionnement de la fonction strstr (man strstr).
#include <stdio.h>

int ft_strlen(char *str){
    int len;
    len = 0;
    while (str[len]){
        len++;
    }
    return len;
}

// ft_str_str sert à trouver un mot dans une chaîne de caractère, elle permet de montrer la position de la première lettre du mot dans la chaîne.
// Si aucun mot ou bout de mot correspnd à ce que est recherché alors on renverra un 0.
// On commence par calculer la longueur du mot à trouver
// Puis on cherche dans la chaîne de caractère les lettres en commun avec le mot
// Si le mot n'est pas complet on continue la recherche
// char *ft_strstr(char *str, char *to_find){
//     int i = 0;
//     int count;
//     count = 0;
//     char first[1];
//     int len;
//     len = ft_strlen(to_find);
//     while (*str){
//         if(*str==*to_find && *str--!=*to_find--)
//             first[0] = i;
//         while (*to_find==*str && *str){
//             count++;
//             str++;
//             to_find++;
//         } 
//         if(count==len){
//             return (first[0]+'0');
//         }else{
//             count = 0;
//             *to_find = 0;
//         }
//         str++;
//         i++;
//     }  
//     return (first[0]+'0'); 
// }

char *ft_strstr(char *str, char *to_find){
    int i;
    i = 0;
    while (str[i]){
        
    }
    
}

int main(){
    char str[100] = "J'adore manger";
    char to_find[100] = "manger";
    ft_strstr(str,to_find);
    return 0;
}