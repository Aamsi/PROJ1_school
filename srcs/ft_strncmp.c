/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouali <iouali@student.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 10:07:25 by iouali            #+#    #+#             */
/*   Updated: 2020/11/17 10:11:29 by iouali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t          i;
    unsigned char   *tmp_s1;
    unsigned char   *tmp_s2;

    tmp_s1 = (unsigned char *) s1;
    tmp_s2 = (unsigned char *) s2;

    i = 0;
    while (i < n && (tmp_s1[i] || tmp_s2[i]))
    {
        if (tmp_s1[i] != tmp_s2[i])
            return (tmp_s1[i] - tmp_s2[i]);
        i++;
    }
    return (0);
}