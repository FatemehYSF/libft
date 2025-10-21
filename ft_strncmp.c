/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyousefi <fyousefi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/18 13:37:42 by kube              #+#    #+#             */
/*   Updated: 2025/10/10 11:12:41 by fyousefi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && i < n && (s1[i] == s2[i]))
	{
		i ++;
	}
	if (i == n)
		return (0);
	else
		return (s1[i] - s2[i]);
}
// int main()
// {
// 	printf("%d\n" , ft_strncmp("Fatemeh", "Fateh" , 4));
// 	printf("%d" , ft_strncmp("Fatemeh", "Fateh" , 5));
// return 0;
// }