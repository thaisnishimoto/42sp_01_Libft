#Functions

|Function|Description|Prototype|Original library|
1|`ft_isalpha`|checks for alphabetic character|`int ft_isalpha(int c)`|`<ctype.h>`|
2|`ft_isdigit`|checks for digit 0 through 9|`int ft_isdigit(int c)`|`<ctype.h>`|
3|`ft_isalnum`|checks for alphanumeric character|`int ft_isalnum(int c)`|`<ctype.h>`|
4|`ft_isascii`|checks if	is ASCII character 0 to 127|`int ft_isascii(int c)`|`<ctype.h>`|
5|`ft_isprint`|checks if	is ASCII character 32 to 126|`int ft_isprint(int c)`|`<ctype.h>`|
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
