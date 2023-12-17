/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avg38                                    +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 18:18:01 by ybayart           #+#    #+#             */
/*   Updated: 2019/08/04 19:23:04 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int run(int i, int nb1, int nb2, int index){
    if (i<index)
        nb2 = run(i+1,nb2,nb2+nb1,index);
    return nb2;
}

int ft_fibonacci(int index){
    
    int res;

    if (index<0)
        return -1;   
    res = run(2,0,1,index);
    return res;
}

int main(){
    int res = ft_fibonacci(10);
    printf("%d",res);
    return 0;
}