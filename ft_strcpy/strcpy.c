#include <unistd.h>
char	*ft_strcpy(char *str, char *str1)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (str1[j])
	{
		str[i] = str1[j];
		i++;
		j++;
	}
	str[i] = 0;
	return (str);
}
//#include <string.h>
#include <stdio.h>
int main()
{
	char str[] = "agswkje";
	char str1[] = "sh";
	printf("%s\n", ft_strcpy(str, str1));
//	printf("%s\n", strcpy(str, str1));
}
