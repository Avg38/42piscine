/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avg38                                    +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 18:18:01 by avg38             #+#    #+#             */
/*   Updated: 2023/07/05 19:23:04 by avg38            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void    ft_putchar(char c){
    write(1,&c,1);
}
void    swap(int *index1, int *index2, int i){
    int c;
    c = index1[i];
    index1[i] = index2[i+1];
    index2[i+1] = c;
}

int strcmp(char *argv1, char *argv2){
    int i;
    int c1;
    int c2;

    i = 0;
    c1 = 0;
    c2 = 0;

    while (argv1[i]){
        c1 = argv1[i] + c1;
        c2 = argv2[i] + c2;
        i++;
    }
    return c1-c2;
}

int main(int argc, char **argv){
    int i;
    int j;
    int index[100];
    i = 1;
    j = 0;
    while (i<argc){
        index[i] = i;
        i++;
    }
    i = 1;

    if (argc<2)
        return 0;
    while (i<argc - 1){
        if (strcmp(argv[index[i]],argv[index[i+1]])>0){
            swap(index,index,i);
            i = 0;   
        }
        i++;
    }
    i = 1;
    while (argv[i]){
        while (argv[i][j])
            ft_putchar(argv[index[i]][j++]);
        write(1,"\n",2);
        j = 0;
        i++;
    }
    return 0;
}