#include <stdio.h>
size_t    ft_strlen(const char *s)
{
    int    size;

    size = 0;
    while (*s)
    {
        size++;
        s++;
    }
    return (size);
}
static int    set_checker(const char *str, char to_find)
{
    while (*str)
    {
        if (*str == to_find)
            return (1);
        str++;
    }
    return (0);
}

static int    set_reverse_checker(const char *str, char to_find)
{
    size_t    strlen;

    strlen = ft_strlen(str) - 1;
    while (strlen >= 0)
    {
        if (str[strlen] == to_find)
            return (1);
        strlen--;
    }
    return (0);
}

static int    bounders_length(const char *str, int si,int ei)
{
    size_t    i;

    i = 0;
    while (str[si] && si <= ei)
    {
        i++;
        si++;
    }
    return (i);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    int        i;
    int        j;
    int    start;
    int    end;
    char     *trimmed;

    i = 0;
    j = 0;
    while (s1[i])
    {
        if (set_checker(set,s1[i]) == 0)
            start = i;
        if (set_reverse_checker(set, s1[i]) == 0)
            end = i;
        i++;
    }
    trimmed = (char *)malloc((bounders_length(s1,start,end) * sizeof(char)) + 1);
    if (!trimmed)
        return (NULL);
    while (s1[start])
        trimmed[j++] = s1[start++];
    trimmed[j] = '\0';
    return (trimmed);
}


int    main(void)
{
    char *s1 = "ababaaaMy name is Simonbbaaabbad";
    char *set = "ab";
    printf("the trimmed string is : %s",ft_strtrim(s1, set));
    // expected result is : My name is Simon
}
