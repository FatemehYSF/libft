/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyousefi <fyousefi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/18 13:37:42 by kube              #+#    #+#             */
/*   Updated: 2025/10/10 13:47:03 by fyousefi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str_cpy;
	size_t		size;
	size_t		i;

	size = ft_strlen(s1);
	i = 0;
	str_cpy = malloc ((size + 1) * sizeof(char));
	if (str_cpy == NULL)
		return (NULL);
	while(i < size)
	{
		str_cpy[i] = s1[i];
		i ++;
	}
	str_cpy[i]= '\0';
	return (str_cpy);
}