/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmonrose <kmonrose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 17:22:25 by kmonrose          #+#    #+#             */
/*   Updated: 2016/01/20 17:22:26 by kmonrose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

size_t			ft_strlen(const char *str);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
int				ft_free_tptr(char **tptr);
void			*ft_realloc(void *ptr, int old, int new);
void			ft_putchar(char c);
void			ft_putstr(char const *str);
void			ft_putnbr(int c);
void			ft_putendl(const char *str);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char const *str, int fd);
void			ft_putendl_fd(const char *str, int fd);
void			ft_putnbr_fd(int n, int fd);
void			*ft_memset(void *b, int c, size_t len);
void			ft_bzero(void *s, size_t n);
void			*ft_memalloc(size_t size);
void			ft_memdel(void **ap);
void			ft_strdel(char **as);
void			ft_strclr(char *s);
void			ft_striter(char *s, void (*f)(char*));
void			*ft_memcpy(void *s1, const void *s2, size_t n);
void			*ft_memmove(void *s1, const void *s2, size_t n);
void			*ft_memccpy(void *s1, const void *s2, int c, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
void			ft_putnbrendl(int n);
void			ft_swap_str(char **ptr1, char **ptr2);
char			*ft_remove_blank(char *str);
char			*ft_strstr(char *str, char *to_find);
char			*ft_strnstr(char *str, char *to_find, size_t n);
char			*ft_strn2str(char *str, char *to_find, size_t n);
char			*ft_strdup(const char *str);
char			*ft_strcpy(char *s1, const char *s2);
char			*ft_strncpy(char *s1, const char *s2, size_t n);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
char			*ft_strcat(char *s1, const char *s2);
char			*ft_strncat(char *s1, const char *s2, size_t n);
char			*ft_strnew(size_t size);
char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ft_strsub(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(const char *s1, const char *s2);
char			*ft_strnjoin(char **s1);
char			*ft_strnjoin_wd(char **s1, char d);
char			*ft_str3join(const char *s1, const char *s2, const char *s3);
char			*ft_strtrim(char const *s);
char			*ft_itoa(int n);
char			**ft_strsplit(char const *s, char c);
int				ft_isalpha(int c);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isprint(int c);
int				ft_isascii(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);
int				ft_strequ(char const *s1, char const *s2);
int				ft_strnequ(char const *s1, char const *s2, size_t n);
int				ft_strcmp(const char *s1, const char *s2);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_atoi(const char *str);
int				get_next_line(int const fd, char **line);
int				ft_abs(int x);
double			ft_fpow(float nb, int power);
double			ft_fatoi(const char *str);
float			ft_fabs(float x);
float			ft_fsqrt(float x);
float			ft_fsin(float x);
float			ft_fcos(float x);
int				ft_fact(int nb);
unsigned int	ft_next_prime(unsigned int n);
char			*ft_add_echap_char(char *s, char c, char *char_to_echap);
char			*ft_del_echap_char(char *s, char c, char *char_to_echap);

#endif
