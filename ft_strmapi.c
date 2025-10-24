/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyousefi <fyousefi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/18 13:37:42 by kube              #+#    #+#             */
/*   Updated: 2025/10/09 15:54:56 by fyousefi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result_str;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	i = 0;
	while (s[i])
		i++;
	result_str = malloc(sizeof(char) * (i + 1));
	if (!result_str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result_str[i] = f(i, s[i]);
		i++;
	}
	result_str[i] = '\0';
	return (result_str);
}
/* char f(unsigned int i, char c)
{
	return i + c;
}
int main()
{
	char *s = "abcd";
	char *result = ft_strmapi(s,f);
	printf("%s", result);
	free(result);
	return (0);
} */