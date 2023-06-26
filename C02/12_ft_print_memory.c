// 42
// 12_ft_print_memory
// Écrire une fonction qui affiche une zone mémoire à l’écran.
// • L’affichage de la zone mémoire est séparée en trois "colonnes" séparées par un espace :
//  ◦ L’adresse en hexadécimal du premier caractère de la ligne suivi d’un ’ :’.
//  ◦ Le contenu en hexadécimal avec un espace tous les deux caractères et doit etre complété avec des espaces si nécessaire (voir l’exemple en dessous).
//  ◦ Le contenu en caractères imprimables.
// • Si un caractère est non-imprimable il sera remplacé par un point.
// • Chaque ligne doit gérer seize caractères.
// • Si size est égale à 0, rien ne sera affiché.
#include <stdio.h>
#include <unistd.h>



int main()
{
    char c = 'c';

    char *ptr = &c;
    int addr = (int*)ptr;

    printf("addr c = %p\n", (int*)ptr);
    printf("addr ptr = %p\n", (void*)&c);
    printf("addr = %d", addr);


    return 0;
}
