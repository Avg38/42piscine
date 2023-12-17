/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avg38                                    +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 18:18:01 by ybayart           #+#    #+#             */
/*   Updated: 2019/08/04 19:23:04 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int ft_is_prime(int nb){
    int i;
    i = 2;
    while (i<nb){
        if (nb%i == 0)
            return 0;
        i++;
    }
    return nb;
    
}

int ft_find_next_prime(int nb){
    if (nb<=1)
        return 0;
    if (ft_is_prime(nb) == nb)
        return nb;
    else
        while (ft_is_prime(nb) != nb)
            nb++;
    return nb;
}

int main(){
    int res = ft_find_next_prime(9);
    printf("%d",res);
    return 0;
}
