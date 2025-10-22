/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyousefi <fyousefi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/18 13:37:42 by kube              #+#    #+#             */
/*   Updated: 2025/10/22 16:42:04 by fyousefi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*mem;
	size_t			i;

	i = 0;
	if (count == 0 || size == 0)
		mem = malloc(1);
	else
		mem = malloc(count * size);
	if (mem == NULL)
		return (NULL);
	while (i < (count * size))
	{
		mem[i] = 0;
		i ++;
	}
	return (mem);
}

/* int main(void)
{
    int *arr = ft_calloc(__INT_MAX__, __INT_MAX__);
    if (!arr)
    {
        printf("Allocation failed!\n");
        return 1;
    }
    for (size_t i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    printf("\n");

    free(arr);

    return 0;
} */