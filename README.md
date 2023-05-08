#Functions

|Function - Part 1|Description|Prototype|Original library|
1|`ft_isalpha`|checks for alphabetic character|`int ft_isalpha(int c)`|`<ctype.h>`|
2|`ft_isdigit`|checks for digit 0 through 9|`int ft_isdigit(int c)`|`<ctype.h>`|
3|`ft_isalnum`|checks for alphanumeric character|`int ft_isalnum(int c)`|`<ctype.h>`|
4|`ft_isascii`|checks if is ASCII character 0 to 127|`int ft_isascii(int c)`|`<ctype.h>`|
5|`ft_isprint`|checks if is ASCII character 32 to 126|`int ft_isprint(int c)`|`<ctype.h>`|
6|`ft_strlen`|calculates lenght of the string|`size_t ft_strlen(const char *s)`|`<string.h>`|
7|`ft_memset`|fills first n bytes of memory with byte c|`void *ft_memset(void *s, int c, size_t n)`|`<string.h>`|
8|`ft_bzero`|erases the data in the n bytes of memory pointed by s|`void ft_bzero(void *s, size_t n)`|`<strings.h>`|
9|`ft_memcpy`|copies n bytes from memory area src to dest|`void *ft_memcpy(void *dest, const void *src, size_t n)`|`<string.h>`|
10|`ft_memmove`|bytes in src are first copied into temp array and then to dest|`void *ft_memmove(void *dest, const void *src, size_t n)`|`<string.h>`|
11|`ft_strlcpy`|copies string up to size-1 from src to dest, NUL-terminating result|`size_t ft_strlcpy(char *dst, const char *src, size_t size)`|`<string.h>`|
12|`ft_strlcat`|concatenate src to dest up to size-1, NUL-terminating result|`size_t ft_strlcat(char *dst, const char *src, size_t size)`|`<string.h>`|
13|`ft_toupper`|converts letter to uppercase|`int ft_toupper(int c)`|`<ctype.h>`|
14|`ft_tolower`|converts letter to lowercase|`int ft_tolower(int c)`|`<ctype.h>`|
15|`ft_strchr`|returns pointer to first occurrence of character c in the string s|`char *ft_strchr(const char *s, int c)`|`<string.h>`|
16|`ft_strrchr`|returns pointer to last occurrence of character c in the string s|`char *ft_strrchr(const char *s, int c)`|`<string.h>`|
17|`ft_strncmp`|compares two strings and returns a int that compares the ascii of the chars if they differ, up to size n|`int ft_strncmp(const char *s1, const char *s2, size_t n)`|`<string.h>`|
18|`ft_memchr`|scans n bytes of memory for first instance of c, returns pointer to matching byte or NULL|`void *ft_memchr(const void *s, int c, size_t n)`|`<string.h>`|
19|`ft_memcmp`|compares the first n bytes of memory areas s1 and s2|`int ft_memcmp(const void *s1, const void *s2, size_t n)`|`<string.h>`|
20|`ft_strnstr`|returns pointer to first occurrence of little in big, no more than len is searched|`char *ft_strnstr(const char *big, const char *little, size_t len)`|`<bsd/string.h>`|
21|`ft_atoi`|converts initial portion of string pointed to by nptr to int|`int ft_atoi(const char *nptr)`|`<stdlib.h>`|
