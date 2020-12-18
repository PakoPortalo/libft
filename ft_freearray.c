/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freearray.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fportalo <fportalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/18 11:54:23 by fportalo          #+#    #+#             */
/*   Updated: 2020/12/18 12:13:01 by fportalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_freearray(char **array)
{
    int i;

    i = 0;
    if (!array)
        return(-1);
    while (array[i])
    {
        free(array[i]);
        i++;
    }
    free(array);
    return (1);
}