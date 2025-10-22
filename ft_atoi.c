/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyousefi <fyousefi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/18 13:37:42 by kube              #+#    #+#             */
/*   Updated: 2025/10/22 12:12:51 by fyousefi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int n)
{
	return (n >= '0' && n <= '9');
}

int	ft_isspace(int c)
{
	return ((c >= 9 && c <= 13) || c == ' ');
}

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	i;
	int	result;
	int	digit;

	sign = 1;
	i = 0;
	result = 0;
	while (ft_isspace(nptr[i]))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		digit = nptr[i] - '0';
		result = result * 10 + digit;
		i++;
	}
	return (result * sign);
}
/* int main(void)
{
    const char *tests[] = {
        "42",
        "   123",
        "   -42",
        "+99",
        "--56",
        "  +00123abc",
        "abc123",
        "   -0000042",
        "",
        "   +0",
        NULL
    };

    int i = 0;
    while (tests[i])
    {
        printf("Input: \"%s\"  , Output: %d\n", tests[i], ft_atoi(tests[i]));
        i++;
    }

    return 0;
} */