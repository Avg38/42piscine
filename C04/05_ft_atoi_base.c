/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
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

int ft_strlen(char *str){
    int i;
    i = 0;
    while (*str++)
        i++;
    return i--;
}

int ft_pow(int nb, int exposant){
    int i;
    i = 1;
    int tmp;
    tmp = nb;
    if (exposant == 0)
        return 1;
    while (i<exposant){
        nb *= tmp;
        i++;
    }
    return nb;
}

int ft_change_base(char *str, int lenBase,char *base){
    int i;
    int lenStr;
    int j;
    int k;
    int nb;

    i = 0;   
    lenStr = ft_strlen(str);
    j = lenStr;
    k = 0;
    nb = 0;

    while (j>0){
        while (str[j - 1]!=base[k])
            k++;
        nb = nb + ft_pow(lenBase,i)*k;
        k = 0;
        i++;
        j--;
    }
    return nb;
}

int ft_verif(int lenBase,char *base){
    int i; 
    i = 0;
    int j; 
    j = 0;
    int doublon; 
    doublon = 0;
    if(lenBase <= 1){
        return 0;
    }
    while (base[i]!='\0'){
        if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
            return 0;
        while (base[j]!='\0'){
            if (base[j] == base[i])
                doublon++;
            j++;
        }
        if (doublon > 1)
            return 0;
        doublon = 0;
        j = 0;
        i++;
    }
    return 1;
}

int ft_in_base(char c, char *base){
    
    while (*base){
        if (*base == c){
            return 1;
        }
        base++;
    }
    return 0;
}

int ft_run(char *str, char *base){
    int i;
    int k;
    int count;
    int sign;

    i = 0;
    k = 0;
    count = 0;
    sign = 1;
    while (str[i] == ' ')
        i++;
    while (str[i] == '+' || str[i] == '-'){
        if (str[i] == '-')
            count++;
        i++;
    }
    if (count%2 !=0)
        sign = -1;
    while (str[i] && ft_in_base(str[i],base) == 1)
        str[k++] = str[i++];
    while (str[k]!='\0'){
        str[k] = '\0';
        k++;
    }
    return sign;
}

int ft_atoi_base(char *str, char *base){
    int lenBase;
    lenBase = ft_strlen(base);
    if ((ft_verif(lenBase,base)) == 0){
        write(1,"",1);
        return 1;
    }
    int sign = ft_run(str,base);
    int nb = ft_change_base(str,lenBase,base);
    nb *= sign;    
    return nb;
}

int main(){
    char base[20] = "01";
    char str[100] = "   +---01011";
    int nb = ft_atoi_base(str,base);
    printf("%d",nb);
    return 0;
}