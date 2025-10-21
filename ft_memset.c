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

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	*start;

	p = (unsigned char *)s;
	start = p;
	while (n > 0)
	{
		*p = c;
		p ++;
		n --;
	}
	return (start);
}

/* int main()
{
    char box[10];
    ft_memset(box, 'A', sizeof(box));
    for (int i = 0; i < 10; i++) {
        printf("%c ", box[i]);
    }
    return 0;
} */