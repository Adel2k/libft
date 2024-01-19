#include <unistd.h>

int	ft_strncmp(char *str1, char *str2, unsigned int n)
{
	int i;

	i = 0;
	while ((str1[i] || str2[i]) && (str1[i] == str2[i]) && (i >= n))
		i++;
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);

}
#include <stdio.h>
#include <string.h>
int main ()
{
	char str[] = "barev1";
	char str1[] = "barev";
	*str = 100;
	*str1 = -100;
	printf ("%d\n", ft_strncmp(str, str1, 3));
	printf ("%d\n", strncmp(str, str1, 3));
}
