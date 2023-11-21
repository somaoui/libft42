#include "libft.h"
#include <stdio.h>

static size_t	count_words(char const *s, char c)
{
	size_t	words;
	size_t	i;

	i = 0;
	while (s[i])
	{
		if ((s[i] != c && s[i + 1] == c) || (s[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}

static void	fill_tab(char *new, char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
	{
		new[i] = s[i];
		i++;
	}
	new[i] = '\0';
}

static void	set_tab(char **tab, char const *s, char c)
{
	size_t	count;
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (s[i])
	{
		count = 0;
		while (s[i + count] && s[i + count] != c)
			count++;
		if (count > 0)
		{
			tab[j] = malloc(sizeof(char) * (count + 1));
			if (!tab[j])
				return ;
			fill_tab(tab[j], (s + i), c);
			j++;
			i = i + count;
		}
		else
			i++;
	}
	tab[j] = 0;
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**tab;

	words = count_words(s, c);
	tab = malloc(sizeof(char *) * (words + 1));
	if (!tab)
		return (NULL);
	set_tab(tab, s, c);
	return (tab);
}

