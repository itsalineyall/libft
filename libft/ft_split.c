/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alinevieira <alinevieira@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 23:31:27 by alvieira          #+#    #+#             */
/*   Updated: 2023/05/09 10:20:14 by alinevieira      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// A função ft_split é responsável por alocar e retornar um
// array de strings resultante da divisão de uma string de entrada
// em substrings, utilizando um caractere delimitador. A função
// percorre a string de entrada e aloca a memória necessária para
// armazenar cada substring. Em seguida, copia os caracteres da string
// de entrada correspondentes à substring para o array alocado, adicionando
// o caractere nulo ao final da string. Por fim, adiciona um ponteiro nulo
// para finalizar o array de strings. Se ocorrer algum erro na alocação
// de memória, a função retorna NULL.

static int	ft_countwords(char *str, char c)
{
	int	j;
	int	i;

	i = 0;
	j = 0;
	while (str[i] == c)
		i++;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			j = j + 1;
			if (str[i + 1] == '\0')
				j = j + 1;
			while(str[i] == c)
				i++;
		}
		i++;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	int	i;
	int	j;
	int start;
	int	len;
	char	**array;

	i = 0;
	while(s[i] != '\0')
		i++;
	array = (char **)malloc(sizeof(char *) * XXXX) + 1;
	if (array == NULL || s == NULL)
		return (NULL);
	j = 0;
	start = i;
	while(s[i] != '\0')
	{
		if (s[i] == c)
		{
			
		}
		i++;
	}
}












static int	ft_count_words(const char *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			words++;
			while (s[i] && s[i] != c)
				i++;
		}	
		else
			i++;
	}
	return (words);
}

static char	*word_splitter(const char *s, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	word = (char *) malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**words;

	i = 0;
	j = 0;
	words = (char **) malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!words || !s)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			words[j] = word_splitter(&s[i], c);
			while (s[i] && s[i] != c)
				i++;
			j++;
		}
		else
			i++;
	}
	words[j] = 0;
	return (words);
}