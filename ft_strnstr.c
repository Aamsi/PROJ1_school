/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouali <iouali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 10:29:28 by iouali            #+#    #+#             */
/*   Updated: 2020/11/20 01:15:15 by iouali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t  i;
    size_t  j;
    char    *tmp_big;
    char    *tmp_little;

    tmp_big = (char *) big;
    tmp_little = (char *) little;
    if (ft_strlen(little) == 0)
        return (tmp_big);
    i = 0;
    while (i < len && tmp_big[i])
    {
        j = 0;
        while (tmp_big[i] == tmp_little[j] && tmp_big[i] && i + j < len)
        {
            i++;
            j++;
        }
        if (tmp_little[j] == '\0')
            return (tmp_big + (i - j));
        i++;
    }
    return (NULL);
}