#include "main.h"

/**
 *  * *_strcat - concatenates @src to @dest
 *
 *   * @src: the source string to append to @dest
 *
 *    * @dest: the destiation string to be concatenated upon
 *
 *     * Return:pointer to the resulting string
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
