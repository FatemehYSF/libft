/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyousefi <fyousefi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/18 13:37:42 by kube              #+#    #+#             */
/*   Updated: 2025/10/20 12:18:36 by fyousefi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	j;

	i = 0;
	j = -1;
	while (s[i])
	{
		if (s[i] == c)
			j = i;
		i ++;
	}
	if (j >= 0)
		return ((char *)&s[j]);
	else if ((char)c == '\0')
		return ((char *)&s[i]);
	else
		return (NULL);
}

// int main()
// {
// 	char s[] = "Fatemeh";
// 	printf("%s\n", ft_strrchr(s, 'e'));
// printf("%s\n", ft_strrchr(s, 'F'));
// printf("%s\n", ft_strrchr(s, 'z'));
// printf("%s\n", ft_strrchr(s, '\0'));
// 	return 0;
// }