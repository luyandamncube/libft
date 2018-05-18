#include <string.h>

int	ft_strlen(char *str)
{
	int k;

	k = 0;
	while (*str++)
		k++;
	return (k);
}

char *ft_strncat(char *dst, char *src, size_t n)
{
    /*man page req:
        -string n concatenate
        -similar to strcat, although does not need to be null terminated if has n or more bytes
        NOTE: Check if you should be using size_t for this ._." )
        NOTE: size_t stores size of data objects in C
    */
    size_t dst_len;
    size_t k;

    k = 0;
    dst_len = ft_strlen(dst);
    while (*src++ && k < n) //while not NULL
		dst[dst_len + k] = src[dst_len + k];
    dst[dst_len + k] = '\0';
    return (dst);
}