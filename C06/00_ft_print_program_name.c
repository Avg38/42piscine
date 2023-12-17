/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
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
    i = 0;

    while (argv[0][i]){
        ft_putchar(argv[0][i]);
        i++;
    }    
    return 0;
}