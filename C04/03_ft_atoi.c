/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
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

int ft_atoi(char *str){
    int count;
    count = 0;
    int tmp;
    tmp = 0;
    int i;
    i = 0;
    int nb;
    nb = 0;
    while (str[i]!='\0'){
        if(str[i] == '-' && tmp != 1)
            count++;
        if(str[i] >= '0' && str[i] <= '9'){
            tmp = 1; 
            if(nb > 0)
                nb = nb*10 + str[i] - '0';
            else
                nb = str[i] - '0';
        }else if(!(str[i] >= '0' && str[i] <= '9') && tmp == 1){
            if(count%2 != 0)
                nb = -nb;
            return nb;
        }
        i++;
    } 
}

int main(){
    int i = 0;
    char str[100] = "  -++-5356az-gnh245";
    int res = ft_atoi(str);
    printf("%d",res);
    return 0;
}
