/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 21:06:32 by bgales            #+#    #+#             */
/*   Updated: 2023/04/28 17:13:05 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <strings.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

char	*ft_itoa(int n);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strnstr(const char *botteDeFoin, const char *aiguille, size_t len);
char	*ft_strrchr(const char *s, int c);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	**ft_split(char const *s1, char c);
int		ft_atoi(const char *str);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_lstsize(t_list *lst);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_tolower(int c);
int		ft_toupper(int c);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lstnew(void *content);
void	ft_bzero(void *s, size_t n);
void	ft_lstadd_back(t_list **alst, t_list *new);
void	ft_lstadd_front(t_list **alst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	*ft_calloc(size_t count, size_t size);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *b, int c, size_t len);

/**

@brief Convert string to int value
@note
@param *str: Input string to convert to int
@retval Returns int value of the string
*/
int ft_atoi(const char *str);
/**

@brief Convert an int to string representation
@note
@param n: The int to be converted
@retval Returns the string representation of n
*/
char *ft_itoa(int n);
/**

@brief Output a single character to a specified file descriptor
@note
@param c: The character to output
@param fd: The file descriptor to write to
@retval None
*/
void ft_putchar_fd(char c, int fd);
/**

@brief Output an integer to a specified file descriptor
@note
@param n: The integer to output
@param fd: The file descriptor to write to
@retval None
*/
void ft_putnbr_fd(int n, int fd);
/**

@brief Convert a given character to its lowercase equivalent
@note
@param c: The character to be converted
@retval Returns the lowercase equivalent of c if one exists, else c
*/
int ft_tolower(int c);
/**

@brief Convert a given character to its uppercase equivalent
@note
@param c: The character to be converted
@retval Returns the uppercase equivalent of c if one exists, else c
*/
int ft_toupper(int c);
/**

@brief Determine whether a given character is alphanumeric or not
@note
@param c: The character to be tested
@retval Returns 1 if the character is alphanumeric, else 0
*/
int ft_isalnum(int c);

/**
@brief Determines whether a character is an ASCII character.
 *
@param c Character to test.
 *
@return Returns 1 if c is an ASCII character (in the range 0 to 127 inclusive),
and 0 otherwise.
 */
int	ft_isascii(int c);

/**
@brief Determines whether a character is a digit.
 *
@param c Character to test.
 *
@return Returns 1 if c is a digit (0-9), and 0 otherwise.
 */
int	ft_isdigit(int c);

/**
@brief Determines whether a character is a printable character.
 *
@param c Character to test.
 *
@return Returns 1 if c is a printable character (in the range 32 to 126 inclusive),
and 0 otherwise.
 */
int	ft_isprint(int c);

/**
@brief Adds an element to the end of a linked list.
 *
@param alst Pointer to a pointer to the first element of the list.
@param new Pointer to the element to add to the list.
 */
void	ft_lstadd_back(t_list **alst, t_list *new);

/**
@brief Adds an element to the beginning of a linked list.
 *
@param alst Pointer to a pointer to the first element of the list.
@param new Pointer to the element to add to the list.
 */
void	ft_lstadd_front(t_list **alst, t_list *new);

/**
@brief Deletes all elements in a linked list and frees their memory.
 *
@param lst Pointer to a pointer to the first element of the list.
@param del Function used to delete the content of an element.
 */
void	ft_lstclear(t_list **lst, void (*del)(void *));

/**
@brief Deletes an element from a linked list and frees its memory.
 *
@param lst Pointer to the element to delete.
@param del Function used to delete the content of the element.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *));

/**
@brief Applies a function to each element of a linked list.
 *
@param lst Pointer to the first element of the list.
@param f Function to apply to each element.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *));

/**
@brief Returns the last element of a linked list.
 *
@param lst Pointer to the first element of the list.
 *
@return Returns a pointer to the last element of the list, or NULL if the list is empty.
 */
t_list	*ft_lstlast(t_list *lst);

/**

@brief Create a new linked list by applying function 'f' to each element in the original list
@param lst The original linked list
@param f The function to apply to each element in 'lst'
@param del The function used to delete the content of an element if allocation fails
@return A new linked list with all elements of 'lst' after applying 'f', or NULL if allocation fails
*/
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
/**

@brief Create a new element for a linked list with the given content
@param content The content for the new element
@return A new linked list element with the given content, or NULL if allocation fails
*/
t_list *ft_lstnew(void *content);
/**

@brief Counts the number of elements in a linked list
@param lst The linked list to count
@return The number of elements in 'lst'
*/
int ft_lstsize(t_list *lst);
/**

@brief Set the first 'n' bytes of the memory area starting at 's' to zero
@param s Pointer to the memory area
@param n Number of bytes to set to zero
*/
void ft_bzero(void *s, size_t n);
/**

@brief Allocate memory and initialize all bits to zero
@param count The number of elements to allocate
@param size The size of each element
@return A pointer to the allocated memory, or NULL if allocation fails
*/
void *ft_calloc(size_t count, size_t size);
/**

@brief Search a memory block for the first occurrence of a specific byte
@param s Pointer to the memory block to search
@param c The byte to search for
@param n Number of bytes to search
@return Pointer to the first occurrence of 'c' in 's', or NULL if 'c' was not found
*/
void *ft_memchr(const void *s, int c, size_t n);
/**

@brief Compare the first 'n' bytes of two memory blocks
@param s1 Pointer to the first memory block
@param s2 Pointer to the second memory block
@param n Number of bytes to compare
@return Negative value if 's1' is less than 's2', positive value if 's1' is greater than 's2', or 0 if both are equal
*/
int ft_memcmp(const void *s1, const void *s2, size_t n);
/**

@brief Copy 'n' bytes from memory area 'src' to memory area 'dest'
@param dest Pointer to the destination memory area
@param src Pointer to the source memory area
@param n Number of bytes to copy
@return A pointer to 'dest'
*/
void *ft_memcpy(void *dest, const void *src, size_t n);

/**
@brief Copies a memory area.
 *
@param dst The destination memory area.
@param src The source memory area.
@param len The number of bytes to copy.
 *
@return A pointer to the destination memory area.
 */
void	*ft_memmove(void *dst, const void *src, size_t len);

/**
@brief Fills a block of memory with a specified value.
 *
@param b A pointer to the memory to be filled.
@param c The value to be set.
@param len The number of bytes to be set to the value.
 *
@return A pointer to the memory area.
 */
void	*ft_memset(void *b, int c, size_t len);

/**
@brief Fills a block of memory with a specified value.
 *
@param b A pointer to the memory to be filled.
@param c The value to be set.
@param len The number of bytes to be set to the value.
 *
@return A pointer to the memory area.
 */
void	*ft_memset(void *b, int c, size_t len);

/**
@brief Outputs a string to a specified file descriptor, followed by a newline.
 *
@param s The string to output.
@param fd The file descriptor to write to.
 */
void	ft_putendl_fd(char *s, int fd);

/**
@brief Outputs a string to a specified file descriptor.
 *
@param s The string to output.
@param fd The file descriptor to write to.
 */
void	ft_putstr_fd(char *s, int fd);

/**
@brief Splits a string into an array of strings using a specified delimiter character.
 *
@param s The string to split.
@param c The delimiter character.
 *
@return An array of strings.
 */
char	**ft_split(char const *s, char c);

/**
@brief Locates the first occurrence of a character in a string.
 *
@param s The string to search.
@param c The character to locate.
 *
@return A pointer to the first occurrence of the character, or NULL if the character is not found.
 */
char	*ft_strchr(const char *s, int c);

/**
@brief Duplicates a string.
 *
@param s The string to duplicate.
 *
@return A pointer to the duplicated string.
 */
char	*ft_strdup(const char *s);

/**
@brief Applies the function `f` to each character of the string `s`.
 *
@param s The string to iterate over.
@param f The function to apply to each character. The function takes as parameters
         the index of the character and a pointer to the character itself.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char *));

/**
@brief Concatenates two strings, `s1` and `s2`.
 *
@param s1 The first string to concatenate.
@param s2 The second string to concatenate.
@return A pointer to the newly allocated string, or `NULL` if the allocation failed.
 */
char	*ft_strjoin(char const *s1, char const *s2);

/**
@brief Concatenates the string `src` onto the end of `dst`, overwriting the null byte
       at the end of `dst`, and adds a terminating null byte. The total length of the
       string resulting from this concatenation is at most `dstsize` - 1.
 *
@param dst The destination buffer.
@param src The source string to concatenate.
@param dstsize The size of the destination buffer.
@return The total length of the string that would have been created if `dstsize` had been
        large enough to fully contain the result. If the return value is greater than or
        equal to `dstsize`, the output string has been truncated.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

/**
@brief Copies the string `src` into the buffer `dst`, up to a maximum of `dstsize - 1`
       characters, and adds a terminating null byte. The source and destination strings
       should not overlap.
 *
@param dst The destination buffer.
@param src The source string to copy.
@param dstsize The size of the destination buffer.
@return The length of the string that would have been created if `dstsize` had been large
        enough to fully contain the result. If the return value is greater than or equal to
        `dstsize`, the output string has been truncated.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

/**
@brief Calculates the length of the string pointed to by `s`.
 *
@param s Pointer to a null-terminated byte string.
 *
@return The number of bytes in the string pointed to by `s`, not including the terminating null byte ('\0').
 */
size_t	ft_strlen(const char *s);

/**
@brief Applies the function `f` to each character of the string `s` to create a new string resulting from successive applications of `f`.
 *
@param s The string to iterate.
@param f The function to apply to each character.
         The first argument of the function is the index of the character and
         the second argument is the character to modify.
@return The new string created from the successive applications of `f`.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/**
@brief Compares the first `n` bytes of the string `s1` and the string `s2`.
 *
@param s1 The first string to be compared.
@param s2 The second string to be compared.
@param n The number of bytes to be compared.
 *
@return An integer greater than, equal to, or less than 0, according as the string `s1` is greater than, equal to, or less than the string `s2`.
        The comparison is done using unsigned characters, so that '\200' is greater than '\0'.
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n);

/**
@brief Locates the first occurrence of the null-terminated string `needle` in the string `haystack`, where not more than `len` characters are searched.
 *
@param haystack The string to be searched.
@param needle The null-terminated string to search for.
@param len The maximum number of characters to search in the `haystack`.
 *
@return If `needle` is an empty string, `haystack` is returned; if `needle` occurs nowhere in `haystack`, `NULL` is returned;
        otherwise a pointer to the first character of the first occurrence of `needle` is returned.
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

/**
@brief Locates the last occurrence of character `c` (converted to a char) in the string pointed to by `s`.
 *
@param s The string to be searched.
@param c The character to be located.
 *
@return A pointer to the located character in the string `s`, or `NULL` if the character does not appear in the string.
 */
char	*ft_strrchr(const char *s, int c);

/**
@brief Allocates (with `malloc()`) and returns a new string, which is the result of trimming `set` from both ends of `s1`.
 *
@param s1 The string to be trimmed.
@param set The reference set of characters to trim.
 *
@return The trimmed string, or a copy of `s1` if `set` is `NULL` or no trimming is done.
 */
char	*ft_strtrim(char const *s1, char const *set);

/**
@brief Allocates (with `malloc()`) and returns a substring from the string `s`.
 *
@param s The string from which to extract the substring.
@param start The position of the first character to include in the substring.
@param len The length of
**/
char	*ft_substr(char const *s, unsigned int start, size_t len);

#endif
