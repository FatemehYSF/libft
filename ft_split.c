/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyousefi <fyousefi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/18 13:37:42 by kube              #+#    #+#             */
/*   Updated: 2025/10/27 11:26:28 by fyousefi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_word(const char *s, char c)
{
	size_t	i;
	size_t	word_count;

	i = 0;
	word_count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != '\0')
		{
			word_count++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	return (word_count);
}

char	*copy_word(const char *s, size_t start, size_t end)
{
	char	*word;
	size_t	length;
	size_t	i;

	length = end - start;
	word = malloc(length + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
	{
		word[i] = s[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**str_split;
	size_t	i;
	size_t	start;
	size_t	word_i;

	if (!s)
		return (NULL);
	str_split = malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (!str_split)
		return (NULL);
	i = 0;
	word_i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
			str_split[word_i++] = copy_word(s, start, i);
	}
	str_split[word_i] = NULL;
	return (str_split);
}
/* int main()
{
	const char *s = "_Hi_Fatemeh__";
	char **arr = ft_split(s, '_');

	for (int i = 0; arr[i] != NULL; i++)
    	printf("%s ", arr[i]);
	for (int i = 0; arr[i] != NULL; i++)
    	free(arr[i]);
	return (0);
} */