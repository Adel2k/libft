#include<stdio.h>

void	ft_strclr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		s[i] = 0;
		i++;
	}
}
int main(){
	char str[] = "adel";
	ft_strclr(str);
}
