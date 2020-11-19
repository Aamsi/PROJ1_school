/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouali <iouali@student.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 10:24:48 by iouali            #+#    #+#             */
/*   Updated: 2020/11/17 10:27:10 by iouali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	size_t          i;
	size_t          j;
	unsigned int	destlen;
    unsigned char   *tmp_src;

    tmp_src = (unsigned char *) src;
	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (dest[i])
		i++;
	j = 0;
	destlen = i;
	while (tmp_src[i] && j + i < size - 1)
	{
		dest[i + j] = tmp_src[j];
		j++;
	}
	if (j < size)
		dest[i + j] = '\0';
	if (size < destlen)
		return (ft_strlen(src) + size);
	return (destlen + ft_strlen(src));
}