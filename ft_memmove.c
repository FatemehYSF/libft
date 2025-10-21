/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyousefi <fyousefi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/18 13:37:42 by kube              #+#    #+#             */
/*   Updated: 2025/10/15 10:23:24 by fyousefi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	memmove_forward(
	unsigned char *d, const unsigned char *s, size_t len
)
{
	while (len--)
		*d++ = *s++;
}

static void	memmove_backward(
	unsigned char *d, const unsigned char *s, size_t len)
{
	d += len - 1;
	s += len - 1;
	while (len--)
		*d-- = *s--;
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dst;
	s = src;
	if (d == s)
		return (dst);
	if (d < s)
		memmove_forward(d, s, len);
	else
		memmove_backward(d, s, len);
	return (dst);
}
/* int main()
{
	char str2[] = "123456";
	ft_memmove(str2, str2 + 2, 4);
	printf("%s\n", str2);

	char str1[] = "abcdef";
	ft_memmove(str1 + 2, str1, 4);
	printf("%s\n", str1);

    return (0);
} */