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

#include "libft.h"

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
	while (src[i] && dst_length + 1 + i < dstsize)
	{
		dst[dst_length + i] = src[i];
		i ++;
	}
	dst[dst_length + i] = '\0';
	return (src_length + dst_length);
}

// int main()
// {
// 	char dst[10] = "Hi";
// 	printf("%zu | %s\n", ft_strlcat(dst, "Fatemeh", 10), dst);
// 	char dst2[6] = "ABC";
// 	printf("%zu | %s\n", ft_strlcat(dst2, "XYZXYZ", 6), dst2);
// 	char dst3[6] = "ABC";
// 	printf("%zu | %s\n", strlcat(dst3, "XYZXYZ", 6), dst3);
// 	char dst4[10] = "Hi";
// 	printf("%zu | %s\n", strlcat(dst4, "Fatemeh", 10), dst);
// 	return 0;
// }