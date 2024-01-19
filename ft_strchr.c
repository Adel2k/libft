#include<stdio.h>
#include<unistd.h>
#include<string.h>
/*char	*ft_strchr(char *str, int c)
{
	int i;
	int j;
	
	i = 0;
	while (str[i])
	{
		if (str[i] == (unsigned char)c )
		{
			str[j] =str[i];
		}
		else 
		{
			str[i] = 0;
			i++;
		}
	}
	return (str);
}
*/
char *ft_strchr( char *str, int c)
{
        int i;

        i = 0;
       	while (str[i])
	{
		if (str[i] == (unsigned char)c)
			return (char *)&str[i];
		i++;
	}
    return NULL;
}
int main()
{
	char str[] = "hello wolrd.";
	printf("%s\n", ft_strchr(str, 'o'));
//	printf("%s\n", strchr(str, 'i'));
}


