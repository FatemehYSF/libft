/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyousefi <fyousefi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/18 13:37:42 by kube              #+#    #+#             */
/*   Updated: 2025/10/27 15:38:08 by fyousefi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Allocates memory for an array and initializes it to zero.
 * 
 * The ft_calloc function allocates memory for an array of `count` elements,
 * each of size `size` bytes, and initializes all bytes in the allocated
 * memory to zero. It is equivalent to calling malloc followed by memset
 * to zero.
 * 
 * @param count Number of elements to allocate.
 * @param size Size in bytes of each element.
 * 
 * @warning  * - If `count` or `size` is zero,
 *  behavior depends on the implementation of malloc; 
 *   it may return NULL or a unique pointer
 * 	 that should not be dereferenced.
 * - If the multiplication `count * size` would overflow `size_t`, the function 
 *   returns NULL to prevent undefined behavior.
 * - Always check the return value before using the allocated memory.
 * 
 * @return void* 
 */
void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*mem;
	size_t			i;
	size_t			total;

	i = 0;
	total = count * size;
	if (total / size != count)
		return (NULL);
	if (count == 0 || size == 0)
		mem = malloc(0);
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