/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyousefi <fyousefi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/18 13:37:42 by kube              #+#    #+#             */
/*   Updated: 2025/10/27 11:47:31 by fyousefi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_digits(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n != 0)
	{
		n /= 10;
		count ++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int				count;
	char			*array;
	unsigned int	number;

	count = count_digits(n);
	array = malloc (sizeof(char) * (count + 1));
	array[count] = '\0';
	if (n == 0)
	{
		array[0] = '0';
		return (array);
	}
	if (n < 0)
	{
		array[0] = '-';
		number = -n;
	}
	else
		number = n;
	while (number > 0)
	{
		array[--count] = (number % 10) + '0';
		number /= 10;
	}
	return (array);
}
/* int main()
{
	int n = 123;
	printf("%s", ft_itoa(n));
	return (0);
} */