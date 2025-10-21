/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyousefi <fyousefi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/18 13:37:42 by kube              #+#    #+#             */
/*   Updated: 2025/10/20 15:40:49 by fyousefi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (little[j] != '\0' && (i + j) < len && big[i + j] == little[j])
			j ++;
		if (little[j] == '\0')
			return ((char *)(big + i));
		i ++;
	}
	return (NULL);
}
/* int main(void)
{
    const char big[] = "Hello, Fatemeh yousefi!";
    const char *little = "Fatemeh";

    char *found = ft_strnstr(big, little, 20);

    if (found)
        printf("Found '%s'!\n in %s", little, found);
    else
        printf("Did not find '%s'.\n", little);

    return 0;
} */
