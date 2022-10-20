#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int				ft_isalpha(int character);
int				ft_isdigit(int character);
int				ft_isalnum(int character);
int				ft_isascii(int character);
int				ft_isprint(int character);
int				ft_strlen(const char *str);
void			*ft_memset(void *membloc, int value, unsigned int n);
void			ft_bzero(void *membloc, unsigned int size);
void			*ft_memcpy(void *dest, const void *src, unsigned int size);
void			*ft_memmove(void *dest, const void *src, int size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int n);
//strlcat
int				ft_toupper(int character);
int				ft_tolower(int character);
char			*ft_strchr(char *str, int searchedChar);
char			*ft_strrchr(char *str, int searchedChar);
int				ft_strncmp(const char *s1, const char *s2, unsigned int lenght);
void			*ft_memchr(void *membloc, int searchedChar, unsigned int size);
int				ft_memcmp(const void *s1, const void *s2, unsigned long n);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
void			ft_putchar_fd(char c, int fd);
char            *ft_strnstr(const char *big, const char *little, size_t len);
void			ft_putstr_fd(char *s, int fd);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
//strnstr
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
char			*ft_itoa(int n);
int				ft_atoi(char *nptr);
void			*ft_calloc(unsigned long nmemb, unsigned long size);
char			*ft_strdup(const char *src);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_striteri(char *s, void (*f)(unsigned int, char*));


#endif