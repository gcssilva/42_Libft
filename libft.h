#include <stdlib.h>

int		ft_atoi(char *str);

void	ft_bzero(void *s, size_t n);

int		ft_isalnum(int c);

int		ft_isalpha(int c);

int		ft_isascii(int c);

int		ft_isdigit(int c);

int		ft_isprint(int c);

void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n);

void	*ft_memset(void *s, int c, size_t n);

char	*ft_strchr(const char *str, int c);

size_t	ft_strlcat(char *dst, const char *src, size_t size);

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

int		ft_strlen(char *str);

int		ft_strncmp(const char *s1, const char *s2, size_t n);

char	*ft_strrchr(const char *s, int c);

int		ft_tolower(int c);

int		ft_toupper(int c);

void	*ft_memchr(const void *s, int c, size_t n);

int		memcmp(const void *s1, const void *s2, size_t n);