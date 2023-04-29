/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvieira <alvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 17:32:02 by alvieira          #+#    #+#             */
/*   Updated: 2023/04/30 00:40:04 by alvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <ctype.h>

# define YELLOW "\033[1;33m" // vai negrito tbm
# define RESET "\033[0m" // vai resetar para a cor original
# define ITALIC "\033[3m\033[36m" // vai deixar italico e azul
# define BLUE "\033[0;34m" // vai deixar azul
# define GREEN "\033[32m" // vai deixar verde
# define RED "\033[31m" // vai deixar vermelho
# define CIANO "\033[36m" // vai deixar ciano

// parte 1
size_t	ft_strlen(const char *str);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
void	*ft_memset(void *s, int c, size_t n);
void 	ft_bzero(void *s, size_t n);
void 	*ft_memcpy(void *dest, const void *src, size_t n);
void 	*ft_memmove(void *dest, const void *src, size_t n);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int     ft_atoi(const char *nptr);

// parte 2
char	*ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strjoin(const char *s1, const char *s2);

#endif