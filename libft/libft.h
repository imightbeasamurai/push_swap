#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int		ft_atoi(const char *str);
int		is_sign(int c);
int		is_space(int c);
size_t	ft_strlen(const char *str);
int		is_digit(int c);
char	*ft_strjoin(char const *str1, char const *str2);
char	**ft_split(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	ft_putstr_fd(char *s, int fd);
int		ft_putstr(char *s);
void	ft_panic(char *error);

#endif
