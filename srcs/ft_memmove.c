/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouali <iouali@student.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 14:47:29 by iouali            #+#    #+#             */
/*   Updated: 2020/11/16 16:50:43 by iouali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t          i;
    unsigned char   tmp;
    unsigned char   *tmp_src;
    unsigned char   *tmp_dest;

    if ((!dest && !src) || n == 0)
        return (dest);
    tmp_src = (unsigned char *) src;
    tmp_dest = dest;
    if (dest > src)
    {
        i = n;
        while ((int) --i >= 0)
        {
            tmp = tmp_src[i];
            tmp_dest[i] = tmp;
        }
        return (dest);
    }
    i = -1;
    while (++i < n)
    {
        tmp = tmp_src[i];
        tmp_dest[i] = tmp;
    }
    return (dest);
}
