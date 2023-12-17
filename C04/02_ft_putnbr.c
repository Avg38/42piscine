/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avg38                                    +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 18:18:01 by ybayart           #+#    #+#             */
/*   Updated: 2019/08/04 19:23:04 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c){
    write(1,&c,1);
}
void    ft_putnbr(int nb){
    if(nb<0){
        write(1,"-",1);
        nb = -nb;
    }
    if(nb> 9){
        ft_putnbr(nb/10);
    }
    ft_putchar(nb%10 + '0');
}

int main(){
    int nb = 422;
    ft_putnbr(nb);
    return 0;
}