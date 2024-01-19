#include<stdio.h>
#include<unistd.h>
#include <string.h>

int	ft_strlen(char *str)
{

	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
int main ()
{
	char str[] = "adel";
	printf("%d\n",ft_strlen(str));
}

