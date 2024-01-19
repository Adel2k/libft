/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:40:32 by adel              #+#    #+#             */
/*   Updated: 2024/01/16 19:26:51 by adel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_S
# define HEADER_S
#include <stdlib.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *str, int c);
void	ft_putchar(char c);
void	ft_putnbr(char c);
int	ft_atoi(char *str);
int	ft_isalpha(int vul);
int	ft_isdigit(int vul);
int	ft_isalnum(int vul);
int	ft_isascii(int vul);
int	ft_isprint(int vul);
int	ft_strlen(const char *s);
void	ft_bzero(void *s, size_t n);
int	ft_toupper(int c);
int	ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);

#endif
