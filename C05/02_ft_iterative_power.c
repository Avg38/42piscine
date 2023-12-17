/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avg38                                    +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 18:18:01 by ybayart           #+#    #+#             */
/*   Updated: 2019/08/04 19:23:04 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int ft_iterative_power(int nb, int power){
    int i;
    int tmp;

    i = 1;
    tmp = nb;
    if (power == 0)
        return 1;    
    if (power < 0)
        return 0;
    while (i<power){
        nb *= tmp;
        i++;
    }
    return nb;
    
}

int main(){
    int res = ft_iterative_power(5,-2);
    printf("%d",res);
    return 0;
}