/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factoriale.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avg38                                    +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 18:18:01 by ybayart           #+#    #+#             */
/*   Updated: 2019/08/04 19:23:04 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int run(int i, int res, int nb){
    if (i<=nb)
        res = run(i+1,res,nb) * i;
    return res;
}

int ft_recursive_factorial(int nb){
    int i;
    int res;

    i = 1;
    res = 1;
    if (nb<0)
        return 0;    
    res = run(i,res,nb);
    return res;
    
}

int main(){
    int res = ft_recursive_factorial(7);
    printf("%d",res);
    return 0;
}