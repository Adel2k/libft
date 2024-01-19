#include <unistd.h>

void	ft_putstr(char const *s)
{
	int	i;

	while (s[i])
	{
		write (1, &s[i], 1);
		i++;
	}
}
int main ()
{
	char const s[] = "adel";
	ft_putstr(s);
}
