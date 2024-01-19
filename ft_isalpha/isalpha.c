#include <stdio.h>
#include <ctype.h>
int ft_isalpha(int i)
{
	if ((i >= 'a' && i <= 'z')||(i >= 'A' && i <= 'Z'))
		return (1024);
	return (0);
}
int main ()
{
	printf("%d\n",ft_isalpha('A'));
}
