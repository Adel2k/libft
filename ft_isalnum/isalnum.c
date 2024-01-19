#include <stdio.h>
#include <ctype.h>
int	ft_isalnum(int i)
{
	if ((i >= 'a' && i <= 'z') || (i >= '0' && i <= '9') || (i >= 'A' && i <= 'Z'))
		return (8);
	return (0);
}
int main ()
{
	printf("%d\n", ft_isalnum(' '));
}
