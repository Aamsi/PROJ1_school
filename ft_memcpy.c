/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouali <iouali@student.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 14:31:27 by iouali            #+#    #+#             */
/*   Updated: 2020/11/04 14:51:06 by iouali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t           i;
    unsigned char    *tmp_src;
    unsigned char    *tmp_dest;

    if (!dest && !src)
        return (dest);
    tmp_src = (unsigned char *) src;
    tmp_dest = dest;
    i = 0;
    while (i < n)
    {
        tmp_dest[i] = tmp_src[i];
        i++;
    }
    return (dest);
}