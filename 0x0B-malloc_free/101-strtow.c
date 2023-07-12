#include <stdlib.h>
/**
 * countWords - counts the number of words in a string
 * @s: A string
 * Return: Number of words
 */
int countWords(char *s)
{
	int i, count = 0;

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] != 32)
		{
			while (s[i] != 32)
			{
				if (s[i + 1] == 0)
					break;
				i++;
			}
			count++;
		}
	}
	return (count);
}
/**
 * strtow - splits a string into words
 * @str: A string
 * Return: An array of words
 */
char **strtow(char *str)
{
	int wordsNum, revWord, wordlen, i, j;
	char **words;

	if (str == NULL || *str == 0 || countWords == 0)
		return (NULL);
	wordsNum = countWords(str);
	words = (char **)malloc(sizeof(char *) * wordsNum);
	if (words == NULL)
		return (NULL);
	for (i = 0, wordlen = 0, j = 0; str[i] != 0; i++, wordlen = 0)
	{
		while (str[i] != 32)
		{
			if (str[i + 1] == 0)
			{
				wordlen++, i++;
				break;
			}
			i++, wordlen++;
		}

		if (wordlen != 0)
		{
			words[j] = (char *)malloc(sizeof(char) * wordlen + 2);
			i -= wordlen;
			revWord = 0;
			while (revWord < wordlen)
			{
				words[j][revWord] = str[i];
				i++, revWord++;
				if (str[i] == 0)
					i--;
			}
			words[j][wordlen] = 0;
			j++;
		}
	}
	words[j] = (char *)malloc(sizeof(char));
	words[j] = NULL;
	return (words);
}
