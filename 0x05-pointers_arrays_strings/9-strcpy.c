#include <stdio.h>

/**
 *_strcpy - Copies a string pointed to by @src, including the
 *             terminating null byte, to a buffer pointed to by @dest.
 *@dest: A buffer to copy the string to.
 *@src: The source string to copy.
 *     
 *Return: A pointer to the destination string @dest.
 */
int main(void);
char *_strcpy(char *dest, const char *src)
{
int len = 0;
while (*(src + len) != '\0')
{
*(dest + len) = *(src + len);
len++;
}
*(dest + len) = '\0';

return (dest);

}


