/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avg38                                    +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:18:01 by avg38             #+#    #+#             */
/*   Updated: 2023/07/11 19:23:04 by avg38            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int strlen(char *str){
    int i;
    i = 0;
    while (str[i]!='\0')
        i++;
    return i;
}

char *ft_strdup(char *src){
    size_t len;
    char *dest = NULL;
    len = strlen(src);
    dest = (char *)malloc(len);
    printf("%d",&dest);
    return &dest;
}

int main(){
    char src[100] = "Je suis heureuse";
    ft_strdup(src);
    return 0;
}

