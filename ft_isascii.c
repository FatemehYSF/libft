/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyousefi <fyousefi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/18 13:37:42 by kube              #+#    #+#             */
/*   Updated: 2025/10/09 11:34:06 by fyousefi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/* int main(void)
{
    char test_chars[] = "aZ3#m你好";
    int i = 0;
    char result;

    while (test_chars[i])
    {
        result = ft_isascii(test_chars[i]) + '0';
        write(1, &test_chars[i], 1);
        write(1, ": ", 2);
        write(1, &result, 1);
        write(1, "\n", 1);
        i++;
    }

    return 0;
} */