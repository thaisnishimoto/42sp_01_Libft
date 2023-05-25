#Functions

| Function - Part 1 | Description | Prototype | Original library |
|---|---|---|---|
| [`ft_isalpha`](ft_isalpha.c) | <sub>checks for alphabetic character<sub> | <sub>`int ft_isalpha(int c)`<sub> | <sub>`<ctype.h>`<sub> |
| [`ft_isdigit`](ft_isdigit.c) | <sub>checks for digit 0 through 9<sub> | <sub>`int ft_isdigit(int c)`<sub> | <sub>`<ctype.h>`<sub> |
| [`ft_isalnum`](ft_isalnum.c) | <sub>checks for alphanumeric character<sub> | <sub>`int ft_isalnum(int c)`<sub> | <sub>`<ctype.h>`<sub> |
| [`ft_isascii`](ft_isascii.c) | <sub>checks if is ASCII character 0 to 127<sub> | <sub>`int ft_isascii(int c)`<sub> | <sub>`<ctype.h>`<sub> |
| [`ft_isprint`](ft_isprint.c) | <sub>checks if is ASCII character 32 to 126<sub> | <sub>`int ft_isprint(int c)`<sub> | <sub>`<ctype.h>`<sub> |
| [`ft_strlen`](ft_strlen.c) | <sub>calculates lenght of the string<sub> | <sub>`size_t ft_strlen(const char *s)`<sub> | <sub>`<string.h>`<sub> |
| [`ft_memset`](ft_memset.c) | <sub>fills first n bytes of memory with byte c<sub> | <sub>`void *ft_memset(void *s, int c, size_t n)`<sub> | <sub>`<string.h>`<sub> |
| [`ft_bzero`](ft_bzero.c) | <sub>erases the data in the n bytes of memory pointed by s<sub> | <sub>`void ft_bzero(void *s, size_t n)`<sub> | <sub>`<strings.h>`<sub> |
| [`ft_memcpy`](ft_memcpy.c) | <sub>copies n bytes from memory area src to dest<sub> | <sub>`void *ft_memcpy(void *dest, const void *src, size_t n)`<sub> | <sub>`<string.h>`<sub> |
| [`ft_memmove`](ft_memmove.c) | <sub>copies n bytes from memory area src to dest, areas may overlap<sub> | <sub>`void *ft_memmove(void *dest, const void *src, size_t n)`<sub> | <sub>`<string.h>`<sub> |
| [`ft_strlcpy`](ft_strlcpy.c) | <sub>copies string up to size-1 from src to dest, NUL-terminating result<sub> | <sub>`size_t ft_strlcpy(char *dst, const char *src, size_t size)`<sub> | <sub>`<string.h>`<sub> |
| [`ft_strlcat`](ft_strlcat.c) | <sub>concatenate src to dest up to size-1, NUL-terminating result<sub> | <sub>`size_t ft_strlcat(char *dst, const char *src, size_t size)`<sub> | <sub>`<string.h>`<sub> |
| [`ft_toupper`](ft_toupper.c) | <sub>converts letter to uppercase<sub> | <sub>`int ft_toupper(int c)`<sub> | <sub>`<ctype.h>`<sub> |
| [`ft_tolower`](ft_tolower.c) | <sub>converts letter to lowercase<sub> | <sub>`int ft_tolower(int c)`<sub> | <sub>`<ctype.h>`<sub> |
| [`ft_strchr`](ft_strchr.c) | <sub>returns pointer to first occurrence of character c in the string s<sub> | <sub>`char *ft_strchr(const char *s, int c)`<sub> | <sub>`<string.h>`<sub> |
| [`ft_strrchr`](ft_strrchr.c) | <sub>returns pointer to last occurrence of character c in the string s<sub> | <sub>`char *ft_strrchr(const char *s, int c)`<sub> | <sub>`<string.h>`<sub> |
| [`ft_strncmp`](ft_strncmp.c) | <sub>compares two strings and returns a int that compares the ascii of the chars if they differ, up to size n<sub> | <sub>`int ft_strncmp(const char *s1, const char *s2, size_t n)`<sub> | <sub>`<string.h>`<sub> |
| [`ft_memchr`](ft_memchr.c) | <sub>scans n bytes of memory for first instance of c, returns pointer to matching byte or NULL<sub> | <sub>`void *ft_memchr(const void *s, int c, size_t n)`<sub> | <sub>`<string.h>`<sub> |
| [`ft_memcmp`](ft_memcmp.c) | <sub>compares the first n bytes of memory areas s1 and s2<sub> | <sub>`int ft_memcmp(const void *s1, const void *s2, size_t n)`<sub> | <sub>`<string.h>`<sub> |
| [`ft_strnstr`](ft_strnstr.c) | <sub>returns pointer to first occurrence of little in big, no more than len is searched<sub> | <sub>`char *ft_strnstr(const char *big, const char *little, size_t len)`<sub> | <sub>`<bsd/string.h>`<sub> |
| [`ft_atoi`](ft_atoi.c) | <sub>converts initial portion of string pointed to by nptr to int<sub> | <sub>`int ft_atoi(const char *nptr)`<sub> | <sub>`<stdlib.h>`<sub> |
| [`ft_calloc`](ft_calloc.c) | <sub>allocates memory for array of nmemb elements of size bytes each and sets memory to zero<sub> | <sub>`void *ft_calloc(size_t nmemb, size_t n)`<sub> | <sub>`<stdlib.h>`<sub> |
| [`ft_strdup`](ft_strdup.c) | <sub>returns  a pointer to a new string which is a duplicate of the string s, memory for new string allocated with malloc<sub> | <sub>`char *ft_strdup(const char *s)`<sub> | <sub>`<string.h>`<sub> |

| Function - Part 2|Description|Prototype|Original library|
| `ft_substr`|allocates and returns substring from string s, substring begins at start and is of max size len|`char *ft_substr(char const *s, unsigned int start, size_t len)`|noit standard C lib|
| `ft_strjoin`|allocates memory and returns new string with concatenation of s1 and s2|`char *ft_strjoin(char const *s1, char const *s2)`|not standard C lib|
| `ft_strtrim`|allocates memory and returns copy of s1, with chars in set removed from beginning and end of s1|`char *ft_strtrim(char const *s1, char const *set)`|not standard C lib|
| `ft_split`|allocates memory and returns array of strings by splitting s using a delimiter|`char **ft_split(char const *s, char c)`|not standard C lib|
| `ft_itoa`|allocates memory and returns a string representing the int received as argument|`char *ft_itoa(int n)`|not standard C lib|
| `ft_strmapi`|allocates memory and returns a string resulting from applications of f to each character of s|`char *ft_strmapi(char const *s, char (*f)(unsigned int, char))`|not standard C lib|
| `ft_striteri`|applies f to each character of s and modify using the address to the character|`void ft_striteri(char *s, void (*f)(unsigned int, char*))`|not standard C lib|
| `ft_putchar_fd`|Writes character ’c’ to the given file descriptor|`void ft_putchar_fd(char c, int fd)`|not standard C lib|
| `ft_putstr_fd`|Writes string ’s’ to the given file descriptor|`void ft_putstr_fd(char *s, int fd)`|not standard C lib|
| `ft_putendl_fd`|Writes string ’s’ to the given file descriptor, followed by new line|`void ft_putendl_fd(char *s, int fd)`|not standard C lib|
| `ft_putnbr_fd`|Writes integer ’n’ to the given file descriptor|`void ft_putnbr_fd(int n, int fd)`|not standard C lib|

| Function - Bonus Part|Description|Prototype|Original library|
| `ft_lstnew`|Returns new node with member content malloced to value of the parameter and next initialized to NULL|`t_list *ft_lstnew(void *content)`|not standard C lib|
| `ft_lstadd_front`|Adds a new node at the beginning of the list|`void ft_lstadd_front(t_list **lst, t_list *new)`|not standard C lib|
| `ft_lstsize`|Counts number of nodes in a list|`int ft_lstsize(t_list *lst)`|not standard C lib|
| `ft_lstlast`|Returns the last node of the list|`t_list *ft_lstlast(t_list *lst)`|not standard C lib|
| `ft_lstadd_back`|Adds a new node at the end of the list|`void ft_lstadd_back(t_list **lst, t_list *new)`|not standard C lib|
| `ft_lstadd_back`|Frees the memory of a node’s content using the function ’del’. The memory of ’next’ must not be freed|`void ft_lstdelone(t_list *lst, void (*del)(void*))`|not standard C lib|
