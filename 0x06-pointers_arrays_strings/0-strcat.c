#include "main.h"
#include <string.h>

/**
 * strcat - Concatenates the string pointed to by @src, including the terminating
 *             null byte, to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *      
 * Return: A pointer to the destination string @dest.
 */


int main()
{
	char *_strcat(char *dest, char *src);
 char dest[100], src[100];
 strcpy(dest, " ");
 strcpy(src, " ");
 strcat(dest, src);
 printf("%s", dest);

 return 0;

}
