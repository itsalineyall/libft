/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alinevieira <alinevieira@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:58:58 by alinevieira       #+#    #+#             */
/*   Updated: 2023/05/04 19:25:52 by alinevieira      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_counter(int	n)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (n < 0)
	{
		j = -1;
		n = n * -1;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	if (j < 0)
		return (i + 1);
	else
		return (i);
}

char *ft_itoa(int n)
{
    int len;
    int i;
    char    *str;

	len = ft_counter(n);
    str = (char *)calloc(len + 1, sizeof(char));
    if (str == NULL)
        return (NULL);
	i = len;
	if (n < 0)
	{
		str[0] = '-';
		n = n * -1;
		i++;
	}
	while (len > 0 && n)
	{
		str[len - 1] = (n % 10) + 48;
		n = n/10;
		len--;
	}
	str[len + 1] = '\0';
	
    return (str);
}