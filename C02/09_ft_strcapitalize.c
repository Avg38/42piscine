// 42
// 09_ft_strcapitalize
// Écrire une fonction qui met en majuscule la première lettre de chaque mot et le reste du mot en minuscule.
// Un mot est une suite de caractères alphanumériques.
// Elle devra renvoyer str
#include <stdio.h>

char *ft_strcapitalize(char *str){
    int i;
    i = 1;
    if((str[0]>='a' && str[0]<='z')){
        str[0] = str[0] - 32;
    }
    while(str[i]!='\0'){
        if((str[i]>='a' && str[i]<='z')){
            if(!(((str[i-1]>='A') && (str[i-1]<='Z')) || ((str[i-1]>='a') && (str[i-1]<='z')) || ((str[i-1]>='0') && (str[i-1]<='9')))){
                str[i] = str[i] - 32;
            }
        }
        if((str[i]>='A' && str[i]<='Z')){
            if((((str[i-1]>='A') && (str[i-1]<='Z')) || ((str[i-1]>='a') && (str[i-1]<='z')) || ((str[i-1]>='0') && (str[i-1]<='9')))){
                str[i] = str[i] + 32;
            }
        }
        i++;
    }
    return str;
}

int main(){
    char str[100] = "salut, coMment tu vas ? 42Mots quarante-deux; cinquante+et+un";
    int i = 0;
    ft_strcapitalize(str);
    while (str[i]!='\0'){
        printf("%c",str[i]);
        i++;
    }  
    return 0;
}