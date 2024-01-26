#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *str;
    char    *ptr;

    if (!s)
        return (NULL);
    else if ((start >= strlen(s)) || len < 0)
        len = 0;
    else if (len > (strlen(s) - start))
        len = strlen(s) - start;
    str = (char *)malloc(len + 1);
    if (!str)
        return (NULL);
    s += start;
    ptr = str;
    *(str + len) = '\0';
    while (len-- && *s)
        *str++ = *s++;
    return (ptr);
}

int    check(char *str,unsigned char c)
{
    while (str && *str)
    {
        if (*str == c)
            return (1);
        *str++;
    }
    return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    size_t    size;
    size_t    len;
    size_t  start;
    size_t end;
    char *ss;
    
    ss = set;
    size = strlen(s1);
    if (!s1 || !set)
        return (NULL);
    while (*s1 && *set)
    {
        if (check(s1, *set))
            *set++;
        *s1++;
    }
    start = *s1;
    set = ss;
    s1 = *s1(size);
    while (s1)
    {
        if (check(s1, *set) && *set)
            *set++;
        *s1--;
    }
    end = *s1;
    len = end - start;
    ft_substr(s1, start, len);
}
int main()
{
    char    str[] = "abTRIMab";
    char set[] = "ab";
    printf("%s", ft_strtrim(str, set));
}




#include <stdio.h>
#include <stdlib.h>
#include <string.h>
static char    *str_new(size_t n)
{
    char    *str;

    str = (char *)malloc(sizeof(char) * (n + 1));
    if (!str)
        return (NULL);
    return (str);
} 
int    check(char *str,unsigned char c)
{
    while (*str)
    {
        if (*str == c)
            return (1);
        str++;
    }
    return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    size_t    size;
    size_t    len;
    size_t  start;
    size_t end;
   char *ss;
    char *ptr;
    
    ptr = s1;
    ss = set;
    size = strlen(s1);
    if (!s1 || !set)
        return (NULL);
    while (*s1 && *set)
    {
        if (check(set, *s1) && set)
        {
            *set++;
            *s1++;
                set = ss;
        }
        else
        {
        start = &s1;
        break;
        }
    }
    set = ss;
    ptr += size - 1;
    while (ptr)
    {
        if (check(set, *ptr))
            {
              *set++;
              *ptr--;
                  set = ss;
            }
            else{
            end = &s1;
            break;
            }
    }
    len = end - start;
    return (str_new(len));
}
int main()
{
    char    str[] = "cajbTRIMab";
    char set[] = "ab";
    printf("%s", ft_strtrim(str, set));
}















#include <stdio.h>
#include <stdlib.h>
#include <string.h>
static char    *str_new(size_t n)
{
    char    *str;

    str = (char *)malloc(sizeof(char) * (n + 1));
    if (!str)
        return (NULL);
    return (str);
}
int    check(char *str,unsigned char c)
{
    while (*str)
    {
        if (*str == c)
            return (1);
        str++;
    }
    return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    size_t    size;
    size_t    len;
    size_t  start;
    size_t end;
   char *ss;
    char *ptr;

    ptr = s1;
    ss = set;
    size = strlen(s1);
    if (!s1 || !set)
        return (NULL);
    while (*s1 && *set)
    {
        if (check(set, *s1) && set)
        {
            *set++;
            *s1++;
                set = ss;
        }
        else
        {
        start = &s1;
        break;
        }
    }
    set = ss;
    ptr += size - 1;
    while (ptr)
    {
        if (check(set, *ptr))
            {
              *set++;
              *ptr--;
                  set = ss;
            }
            else{
            end = &s1;
            break;
            }
    }
    len = end - start;
    return (str_new(len));
}
int main()
{
    char    str[] = "cajbTRIMab";
    char set[] = "ab";
    printf("%s", ft_strtrim(str, set));
}
