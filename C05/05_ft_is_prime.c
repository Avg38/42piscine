/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
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
    if (nb<=1)
        return 0;
    while (i<nb){
        if (nb%i == 0)
            return 0;
        i++;
    }
    return 1;
}

int main(){
    int res = ft_is_prime(3);
    printf("%d",res);
    return 0;
}