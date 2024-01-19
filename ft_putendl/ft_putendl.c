#include <unistd.h>

int	ft_strlen(char const *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
void	ft_putendl(char const *s)
{
	write (1, s, ft_strlen(s));
	write (1, "\n", 1);
}
int main()
{
	char const s[] = "adel";
	ft_putendl(s);
}
