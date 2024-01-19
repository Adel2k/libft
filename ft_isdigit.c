#include <stdio.h>
#include <ctype.h>
int	ft_isdigit(int i)
{
	if(i >= '0' && i <= '9')
		return (2048);
	return (0);
}
int main ()
{
	printf("%d\n",ft_isdigit('5'));
}
