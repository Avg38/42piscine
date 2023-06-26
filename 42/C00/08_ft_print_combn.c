//42
//08_ft_printcombn
// Écrire une fonction qui affiche toutes les différentes combinaisons de n chiffres dans l’ordre croissant.
// • n sera tel que : 0 < n < 10.
// • Si n = 2, cela donne quelque chose comme ça : $>./a.out | cat -e 01, 02, 03, ..., 09, 12, ..., 79, 89$>

#include <unistd.h>

void ft_putchar(char c){
    write(1,&c,1);
}

void ft_print_combn(int n){
    int nb[n]; //Tableau qui stockera les différentes combinaisons de n chiffres
    int nbLast[n]; //Tableau qui stocke la dernière combinaison
    int i; //Variable qui permettra d'incrémenter les valeur du tableau
    int j; //Idem
    i = 0;
    j = 9;
    while(i!=n){ //Inititalisation du tableau nb[] à la première valeur souhaitée selon n
        nb[i]=i;
        i++;
    }
    i = n-1; //n-1 car le tableau va de 0 à n-1
    while(i>=0){ //Initialisation de la dernière combinaison selon n
        nbLast[i] = j;
        j--;
        i--;
    }
    
    while(nb[0]!=nbLast[0] && nb[n-1]<=nbLast[n-1]){ //Boucle qui va incrémenter les valeur tout en vérifiant leur validité
        j = 0;
        while(j<=n-1){
            ft_putchar(nb[j]+'0'); //On affiche les valeurs de nb[]
            j++;
        }
        ft_putchar(44); //virgule en code ASCII
        ft_putchar(32); //espace en code ASCII
        
        i=n-1;
        nb[i]=nb[i]+1; //On incrémente l'unité
        if(nb[i]==10){ //Dès que l'unité arrive à 10 
            while(i>=0){
                nb[i-1] = nb[i-1]+1; //On augmente la valeur d'avant de 1, puis la valeur d'avant, etc...
                i--;
            }
            nb[n-1] = nb[n-2]+1; //On met l'unité à la valeur de la case précédente +1
        } 
    }
    i=0;
    while(i<n){
        ft_putchar(nbLast[i] + '0'); //On affiche le dernier caractère pour ne pas avoir la virgule à la fin
        i++;
    }
}

int main(){
    ft_print_combn(4);
    return 0;
}
