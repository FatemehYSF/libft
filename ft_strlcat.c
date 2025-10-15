/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyousefi <fyousefi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/18 13:37:42 by kube              #+#    #+#             */
/*   Updated: 2025/10/15 12:38:46 by fyousefi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(
	char *restrict dst, const char *restrict src, size_t dstsize)
{
	int	dst_length;
	int	src_length;
	int	i;

	dst_length = 0;
	src_length = 0;
	i = 0;
	while (dst[dst_length] != '\0')
		dst_length ++;
	while (src[src_length] != '\0')
		src_length ++;
	if (dstsize <= dst_length)
		return (src_length + dstsize);
	while (src[i] && dst_length + 1 < dstsize)
	{
		dst[dst_length] = src[i];
		dst_length ++;
		i ++;
	}
	if (dst_length < dstsize)
		dst[dst_length] = '\0';
	return (src_length + dst_length);
}

/* int main()
{
	char dst[10] = "Hi";
	printf("%zu | %s\n", ft_strlcat(dst, "There", 10), dst);
	char dst2[5] = "Hi";
	printf("%zu | %s\n", ft_strlcat(dst2, "There", 4), dst2);
	// char dst3[5] = "Hi";
	// printf("%zu | %s\n", strlcat(dst3, "There", 4), dst3);
	return 0;
} */