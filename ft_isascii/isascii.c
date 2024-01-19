#include <stdio.h>
#include <ctype.h>
int	ft_isascii(int i)
{
	if (i >= 1 && i <= 255)
		return (1);
	return (0);
}
int	main()
{
	printf("%d\n", ft_isascii('#'));
}
