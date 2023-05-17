#Functions

|Function - Part 1|Description|Prototype|Original library|
|`ft_isalpha`|checks for alphabetic character|`int ft_isalpha(int c)`|`<ctype.h>`|
|`ft_isdigit`|checks for digit 0 through 9|`int ft_isdigit(int c)`|`<ctype.h>`|
|`ft_isalnum`|checks for alphanumeric character|`int ft_isalnum(int c)`|`<ctype.h>`|
|`ft_isascii`|checks if is ASCII character 0 to 127|`int ft_isascii(int c)`|`<ctype.h>`|
|`ft_isprint`|checks if is ASCII character 32 to 126|`int ft_isprint(int c)`|`<ctype.h>`|
|`ft_strlen`|calculates lenght of the string|`size_t ft_strlen(const char *s)`|`<string.h>`|
|`ft_memset`|fills first n bytes of memory with byte c|`void *ft_memset(void *s, int c, size_t n)`|`<string.h>`|
|`ft_bzero`|erases the data in the n bytes of memory pointed by s|`void ft_bzero(void *s, size_t n)`|`<strings.h>`|
|`ft_memcpy`|copies n bytes from memory area src to dest|`void *ft_memcpy(void *dest, const void *src, size_t n)`|`<string.h>`|
|`ft_memmove`|copies n bytes from memory area src to dest, areas may overlap|`void *ft_memmove(void *dest, const void *src, size_t n)`|`<string.h>`|
|`ft_strlcpy`|copies string up to size-1 from src to dest, NUL-terminating result|`size_t ft_strlcpy(char *dst, const char *src, size_t size)`|`<string.h>`|
|`ft_strlcat`|concatenate src to dest up to size-1, NUL-terminating result|`size_t ft_strlcat(char *dst, const char *src, size_t size)`|`<string.h>`|
|`ft_toupper`|converts letter to uppercase|`int ft_toupper(int c)`|`<ctype.h>`|
|`ft_tolower`|converts letter to lowercase|`int ft_tolower(int c)`|`<ctype.h>`|
|`ft_strchr`|returns pointer to first occurrence of character c in the string s|`char *ft_strchr(const char *s, int c)`|`<string.h>`|
|`ft_strrchr`|returns pointer to last occurrence of character c in the string s|`char *ft_strrchr(const char *s, int c)`|`<string.h>`|
|`ft_strncmp`|compares two strings and returns a int that compares the ascii of the chars if they differ, up to size n|`int ft_strncmp(const char *s1, const char *s2, size_t n)`|`<string.h>`|
|`ft_memchr`|scans n bytes of memory for first instance of c, returns pointer to matching byte or NULL|`void *ft_memchr(const void *s, int c, size_t n)`|`<string.h>`|
|`ft_memcmp`|compares the first n bytes of memory areas s1 and s2|`int ft_memcmp(const void *s1, const void *s2, size_t n)`|`<string.h>`|
|`ft_strnstr`|returns pointer to first occurrence of little in big, no more than len is searched|`char *ft_strnstr(const char *big, const char *little, size_t len)`|`<bsd/string.h>`|
|`ft_atoi`|converts initial portion of string pointed to by nptr to int|`int ft_atoi(const char *nptr)`|`<stdlib.h>`|
|`ft_calloc`|allocates memory for array of nmemb elements of size bytes each and sets memory to zero|`void *ft_calloc(size_t nmemb, size_t n)`|`<stdlib.h>`|
|`ft_strdup`|returns  a pointer to a new string which is a duplicate of the string s, memory for new string allocated with malloc|`char *ft_strdup(const char *s)`|`<string.h>`|

|Function - Part 2|Description|Prototype|Original library|
|`ft_substr`|allocates and returns substring from string s, substring begins at start and is of max size len|`char *ft_substr(char const *s, unsigned int start, size_t len)`|noit standard C lib|
|`ft_strjoin`|allocates memory and returns new string with concatenation of s1 and s2|`char *ft_strjoin(char const *s1, char const *s2)`|not standard C lib|
|`ft_strtrim`|allocates memory and returns copy of s1, with chars in set removed from beginning and end of s1|`char *ft_strtrim(char const *s1, char const *set)`|not standard C lib|
|`ft_split`|allocates memory and returns array of strings by splitting s using a delimiter|`char **ft_split(char const *s, char c)`|not standard C lib|
|`ft_itoa`|allocates memory and returns a string representing the int received as argument|`char *ft_itoa(int n)`|not standard C lib|
|`ft_strmapi`|allocates memory and returns a string resulting from applications of f to each character of s|`char *ft_strmapi(char const *s, char (*f)(unsigned int, char))`|not standard C lib|
|`ft_striteri`|applies f to each character of s and modify using the address to the character|`void ft_striteri(char *s, void (*f)(unsigned int, char*))`|not standard C lib|
