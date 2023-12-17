/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avg38                                    +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 18:18:01 by ybayart           #+#    #+#             */
/*   Updated: 2019/08/04 19:23:04 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void    ft_putstr(char *str){
    int i;
    i = 0;
    while (*str){
        write(1,str,1);
        str++;
    }
    
}

int main(){
    char str[100] = "Je suis à la maison";
    ft_putstr(str);    
    return 0;
}
