#include <stdio.h>
#include <ctype.h>
int	ft_isprint(int i)
{
	if (i >= 32 && i <= 126)
		return (1);
	return (0);
}
int	 main()
{
	printf("%d\n", ft_isprint('a'));
}
