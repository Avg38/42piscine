/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avg38                                    +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:18:01 by avg38             #+#    #+#             */
/*   Updated: 2023/07/04 19:23:04 by avg38            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int ft_iterative_factorial(int nb){
    int i;
    int tmp;

    i = 1;
    tmp = 1;
    if (nb<0)
        return 0;    
    while (i<=nb){
       tmp = tmp*i++; 
    } 
    return tmp;
}

int main(){
    int res = ft_iterative_factorial(-1);
    printf("%d",res);
    return 0;
}