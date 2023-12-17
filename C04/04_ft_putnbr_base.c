/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
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
    while (str[i]!='\0')
        i++;
    return i--;
}

void ft_change_base(int nbr, int lenBase, char *base){
    int a;
    if(nbr<0){
        write(1,"-",1);
        nbr = -nbr;
    }
    if(nbr >= lenBase)
        ft_change_base(nbr/lenBase, lenBase,base);
    ft_putchar(base[nbr%lenBase]);
}

int ft_verif(int lenBase,char *base){
    int i; 
    i = 0;
    int j; 
    j = 0;
    int doublon; 
    doublon = 0;
    if(lenBase <= 1)
        return 0;
    while (base[i]!='\0'){
        if (base[i] == '+' || base[i] == '-')
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

void ft_putnbr_base(int nbr, char *base){
    int lenBase;
    lenBase = ft_strlen(base);
    if ((ft_verif(lenBase,base)) == 0)
        write(1,"",1);
    else
        ft_change_base(nbr,lenBase,base);
}


int main(){
    char base[20] = "0123456789ABCDEF";
    int nbr = 2374;
    ft_putnbr_base(nbr,base);
    return 0;
}
