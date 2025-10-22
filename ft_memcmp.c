/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyousefi <fyousefi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/18 13:37:42 by kube              #+#    #+#             */
/*   Updated: 2025/10/22 12:03:39 by fyousefi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const	void *s1, const	void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (str1[i] != '\0' && str2[i] != '\0' && i < n && (str1[i] == str2[i]))
	{
		i ++;
	}
	if (i == n)
		return (0);
	else
		return (str1[i] - str2[i]);
}

/* int main(void) {
    char a[] = {0x01, 0x02, 0x03};
    char b[] = {0x01, 0x02, 0x03};

    int result = ft_memcmp(a, b, sizeof(a));

    if (result < 0)
        printf("a < b\n");
    else if (result > 0)
        printf("a > b\n");
    else
        printf("a = b\n");

    return 0;
}
 */