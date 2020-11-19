/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouali <iouali@student.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 12:12:41 by iouali            #+#    #+#             */
/*   Updated: 2020/11/04 14:30:51 by iouali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *s, int c, size_t n)
{
    size_t      i;
    char        *tmp;

    tmp = s;
    i = 0;
    while (i < n)
    {
        tmp[i] = (unsigned char) c;
        i++;
    }
    return (s);
}
