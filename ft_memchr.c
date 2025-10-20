/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyousefi <fyousefi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/18 13:37:42 by kube              #+#    #+#             */
/*   Updated: 2025/10/20 12:18:52 by fyousefi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	unsigned char *str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == c)
			return (void *)&str[i];
		i ++;
	}
	return (NULL);
}
/* int main()
{
	char mem[] = {'F', 'a', 't', 'e', 'm', 'e', 'h', '\0', 'x'};
	char *s = ft_memchr(mem, 'e', 9);
	if (s)
		printf("Found: %c\n", *s);
	printf("%s" , s);
	return 0;
} */