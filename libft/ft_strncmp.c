/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzohraby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 14:21:53 by vzohraby          #+#    #+#             */
/*   Updated: 2025/04/14 14:21:54 by vzohraby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t	i;

    i = 0;
    while ((s1[i] || s2[i]) && i < n)
    {
        if (s1[i] != s2[i])
        {
            return ((unsigned char)s1[i] - (unsigned char)s2[i]);
        }
        ++i;
    }
    return (0);
}