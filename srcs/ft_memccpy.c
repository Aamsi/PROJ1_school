/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouali <iouali@student.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 14:52:24 by iouali            #+#    #+#             */
/*   Updated: 2020/11/13 14:43:06 by iouali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    size_t          i;
    unsigned char   *tmp_src;
    unsigned char   *tmp_dest;

    if ((!dest && !src) || n == 0)
        return (NULL);
    tmp_src = (unsigned char *) src;
    tmp_dest = (unsigned char *) dest;
    i = 0;
    while (i < n && tmp_src[i] != (unsigned char) c)
    {
        tmp_dest[i] = tmp_src[i];
        i++;
    }
    tmp_dest[i] = tmp_src[i];
    if (i == n)
        return (NULL);
    return (dest + i + 1);
}