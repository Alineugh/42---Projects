/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aughetti <aughetti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 09:34:57 by aughetti          #+#    #+#             */
/*   Updated: 2024/11/04 11:37:13 by aughetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0' && s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != '\0' && s[i] != c)
			{
				i++;
			}
		}
		else
			i++;
	}
	return (count);
}

int	ft_word_length(const char *s, char c)
{
	int	i;
	int	len_word;

	i = 0;
	len_word = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		len_word++;
		i++;
	}
	return (len_word);
}

char	**ft_free(char **array)
{
	int	i;

	i = 0;
	while (array[i] != NULL)
	{
		free(array[i]);
		i++;
	}
	free(array);
	return (NULL);
}

char	*ft_copy_word(const char *s, int *index, char c)
{
	int		len_word;
	char	*word;

	len_word = ft_word_length(&s[*index], c);
	word = ft_substr(s, *index, len_word);
	if (word != NULL)
	{
		*index += len_word;
	}
	else
	{
		return (NULL);
	}
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**new_str;
	int		index_sub;
	int		i;

	index_sub = 0;
	new_str = malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0' && s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			new_str[index_sub] = ft_copy_word(s, &i, c);
			if (new_str[index_sub] == NULL)
				return (ft_free(new_str));
			index_sub ++;
		}
		else
			i++;
	}
	new_str[index_sub] = NULL;
	return (new_str);
}
