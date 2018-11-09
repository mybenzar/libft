/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mybenzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 16:29:06 by mybenzar          #+#    #+#             */
/*   Updated: 2018/11/09 16:58:11 by mybenzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char const *s);
int		ft_strlen(char *str);
void	ft_putnbr(int n);
void	ft_putendl(char const *s);
char 	*ft_strdup(const char *s1);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncpy(char *dst, const char *src, size_t len);
void	ft_strclr(char *s);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strcat(char *restrict s1, const char *restrict s2);
char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n);
int		ft_isalpha(int c);
int		ft_isdigit(int c);

#endif
