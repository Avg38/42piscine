/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avg38                                    +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 18:18:01 by ybayart           #+#    #+#             */
/*   Updated: 2019/08/04 19:23:04 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int run(int i, int res, int nb, int power){
    if (i<power)
        res = run(i+1,res,nb,power) * nb;
    return res;
    
}

int ft_recursive_power(int nb, int power){
    int i;
    int res;

    i = 1;
    res = nb;
    if (power == 0)
        return 1;
    if (power < 0)
        return 0;
    res = run(i, res, nb, power);
    return res;
}

int main(){
    int res = ft_recursive_power(5,3);
    printf("%d",res);
    return 0;
}