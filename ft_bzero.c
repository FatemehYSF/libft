/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyousefi <fyousefi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/18 13:37:42 by kube              #+#    #+#             */
/*   Updated: 2025/10/22 17:17:58 by fyousefi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief The description of this function
 * 
 * @param s void * .... explain whatever you want
 * @param n size_t the length of *s
 * 
 * @warning Be carefull for these case input of 0 will segfault
 * 
 * @return void
 */
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n > 0)
	{
		*p = '\0';
		p ++;
		n --;
	}
}

/* int main()
{
    char box[10];
    ft_bzero(box, sizeof(box));
    for (int i = 0; i < 10; i++) {
        printf("%c ", box[i]);
    }
    return 0;
} */