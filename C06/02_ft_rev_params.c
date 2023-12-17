/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avg38                                    +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:18:01 by avg38             #+#    #+#             */
/*   Updated: 2023/07/04 19:23:04 by avg38            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c){
    write(1,&c,1);
}

int main(int argc, char **argv){
    int i;
    int j;

    i = argc - 1;
    j = 0;

    if (argc<2)
        return 0;
    while (i>0){
        while (argv[i][j]){
            ft_putchar(argv[i][j]);
            j++;
        }
        write(1,"\n",2);
        j = 0;
        i--;
    }
    return 0;
}