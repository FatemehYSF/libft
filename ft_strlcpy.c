/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyousefi <fyousefi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/18 13:37:42 by kube              #+#    #+#             */
/*   Updated: 2025/10/22 12:05:09 by fyousefi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_size;
	size_t	i;

	i = 0;
	src_size = 0;
	while (src[src_size] != '\0')
	{
		src_size ++;
	}
	if (dstsize == 0)
		return (src_size);
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i ++;
	}
	dst[i] = '\0';
	return (src_size);
}
/* int main()
{
    char s[]= "Fatemeh";
    char d[4];
    ft_strlcpy(d, s, 4);
    printf("%s \n", d);
    printf("%zu", ft_strlcpy(d, s, 8));
    return (0);
} */