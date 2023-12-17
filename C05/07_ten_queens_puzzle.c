/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avg38                                    +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:18:01 by avg38             #+#    #+#             */
/*   Updated: 2023/07/04 19:23:04 by avg38            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int ft_putchar(char c){
    write(1,&c,1);    
}

int init(int *tab){
    int i;

    i = 0;

    while (i<=9){
        tab[i] =  0;
        ft_putchar(tab[i] + '0');
        i++;
    }
    write(1,"\n",2);
}

int run(int *tab){
    int i;
    int j;

    i = 9;
    j = 0;
    while (i>=0){
        while (j<=9)
        {
            tab[i] =  j;
            ft_putchar(tab[i] + '0');
            j++;
        }
        write(1,"\n",2);
        i--; 
    }
    write(1,"\n",2);
}

int ft_ten_queens_puzzle(void){
    int tab[11];
    init(tab);
    run(tab);
}

int main(){
    ft_ten_queens_puzzle();
    return 0;
}