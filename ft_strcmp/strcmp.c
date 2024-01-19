#include <unistd.h>

int ft_strcmp(char *str1, char *str2)
{
	int i;

	i = 0;
	while ((str2[i] || str1[i]) && (str1[i] == str2[i]))
		i++;
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
	
	}

#include <string.h>
#include <stdio.h>

int main()
{
	char str[] = "as";
	char str1[] = "as";

	//*str = 100;
	//*str1 = -100;
	printf("%d\n", ft_strcmp(str, str1));
//	printf("%d\n", strcmp(str, str1));
}
