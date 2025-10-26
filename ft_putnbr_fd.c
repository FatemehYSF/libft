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

void	ft_putnbr_fd(int n, int fd)
{
	char *str_number;
	char *ptr;
	str_number = ft_itoa(n);
	if (!str_number)
		return;
	ptr = str_number;
	while (*str_number)
	{
		write(fd, str_number, 1);
		str_number++;
	}
	free(ptr);
}
/* int main()
{
	int number = 123;
	ft_putnbr_fd(number, 1);
	return (0);
} */