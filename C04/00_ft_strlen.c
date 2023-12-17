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

int ft_strlen(char *str){
    int i;
    i = 0;
    while (str[i]){
        i++;
    }
    return i--;
}

int main(){
    char str[100] = "Je suis une banane";
    int res = ft_strlen(str);
    printf("%d",res);
    return 0;
}