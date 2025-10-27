/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyousefi <fyousefi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/18 13:37:42 by kube              #+#    #+#             */
/*   Updated: 2025/10/27 11:22:37 by fyousefi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim_str;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	trim_str = (char *)malloc(end - start + 1);
	if (!trim_str)
		return (NULL);
	i = 0;
	while (start < end)
	{
		trim_str[i] = s1[start];
		start ++;
		i ++;
	}
	trim_str[i] = '\0';
	return (trim_str);
}
/* int main()
{
	char *s1 = "--Fatemeh--";
	char *set = "-";
	printf("%s" , ft_strtrim(s1, set) );
	return 0;
} */